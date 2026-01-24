import os
from langchain_community.document_loaders import PyPDFLoader, TextLoader
from langchain_text_splitters import RecursiveCharacterTextSplitter
from langchain_community.embeddings import FastEmbedEmbeddings
from langchain_chroma import Chroma
from langchain_ollama import OllamaLLM
from langchain_core.prompts import ChatPromptTemplate
from langchain_core.runnables import RunnablePassthrough
from langchain_core.output_parsers import StrOutputParser

# Constants
DB_PATH = "chroma_db"
MODEL_NAME = "llama3.2:3b" # Standard 3B model (2.0GB)

# Global Vector Store (Lazy Init)
vector_store = None

def get_vector_store():
    global vector_store
    if vector_store is None:
        # Use FastEmbed (CPU friendly, no API key needed)
        embeddings = FastEmbedEmbeddings(model_name="BAAI/bge-small-en-v1.5")
        vector_store = Chroma(
            persist_directory=DB_PATH,
            embedding_function=embeddings
        )
    return vector_store

def ingest_file(file_path: str):
    """Parses a PDF/Text file and adds it to the vector store."""
    if file_path.endswith(".pdf"):
        loader = PyPDFLoader(file_path)
    else:
        loader = TextLoader(file_path)
    
    docs = loader.load()
    
    # Split text
    text_splitter = RecursiveCharacterTextSplitter(chunk_size=1000, chunk_overlap=200)
    splits = text_splitter.split_documents(docs)
    
    # Add to DB
    vs = get_vector_store()
    vs.add_documents(splits)
    # vs.persist() # Chroma 0.4+ persists automatically

    return len(splits)

def query_rag(question: str):
    """Queries the local vector store and answers via Ollama."""
    vs = get_vector_store()
    retriever = vs.as_retriever(search_type="similarity", search_kwargs={"k": 4})
    
    llm = OllamaLLM(model=MODEL_NAME)
    
    prompt = ChatPromptTemplate.from_template("""
    Answer the question based ONLY on the following context:
    {context}
    
    Question: {question}
    
    If you don't know the answer, just say you don't know. Keep the answer concise and conversational.
    """)
    
    def format_docs(docs):
        return "\n\n".join(doc.page_content for doc in docs)
    
    rag_chain = (
        {"context": retriever | format_docs, "question": RunnablePassthrough()}
        | prompt
        | llm
        | StrOutputParser()
    )
    
    return rag_chain.invoke(question)
