from fastapi import FastAPI, UploadFile, File, Form, HTTPException
from fastapi.middleware.cors import CORSMiddleware
from fastapi.staticfiles import StaticFiles
from fastapi.responses import FileResponse
import uvicorn
import os
from dotenv import load_dotenv
from app.services.vision import process_image_to_data
from app.services.excel import create_excel_file

load_dotenv()

# Ensure export directory exists
EXPORT_DIR = "exports"
if not os.path.exists(EXPORT_DIR):
    os.makedirs(EXPORT_DIR)

app = FastAPI(title="AI Excel App Backend")

# Mount exports directory to serve files
app.mount("/download", StaticFiles(directory=EXPORT_DIR), name="download")
app.add_middleware(
    CORSMiddleware,
    allow_origins=["*"],
    allow_methods=["*"],
    allow_headers=["*"],
)

@app.get("/")
async def root():
    return {"message": "AI Excel App API is running"}

@app.post("/upload")
async def upload_image(
    file: UploadFile = File(...),
    instructions: str = Form("Convert this table to excel")
):
    # 1. Read image content
    image_content = await file.read()
    
    # 2. Process with AI
    data = await process_image_to_data(image_content, instructions)
    
    # 3. Generate Excel
    excel_path = create_excel_file(data)
    
    return {
        "status": "success",
        "data": data,
        "excel_url": f"/download/{os.path.basename(excel_path)}"
    }

if __name__ == "__main__":
    uvicorn.run("app.main:app", host="0.0.0.0", port=int(os.getenv("PORT", 8000)), reload=True)
