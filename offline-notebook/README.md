# Offline Audio Notebook (Tricher Clone)

A generic "Hands-Free" AI study assistant that works 100% offline.
Features **Voice-to-Answer**: Ask questions via microphone, and the AI speaks the answer back.

## 🚀 Setup Guide (Do this once)

### 1. Install Dependencies
You need two free tools to run this:

1.  **Python 3.10+**: [Download Here](https://www.python.org/downloads/)
    *   **IMPORTANT:** Check the box **"Add Python to PATH"** during installation.
2.  **Ollama**: [Download Here](https://ollama.com/)
    *   This runs the AI model on your computer.

### 2. Download the AI Model
Open your Command Prompt (cmd) or PowerShell and run this command:
```bash
ollama run llama3.2:3b
```
*This downloads the standard 3B model (~2.0 GB).*

### 3. Start the App
Double-click the **`start.bat`** file in this folder.
It will:
1.  Install Python libraries automatically.
2.  Start the server.
3.  Open the App in your browser.

## 🎙️ How to Use
1.  **Upload**: Click "+ Upload Document" to add a PDF or Text file.
2.  **Voice**: Click the **Big Microphone Button**.
    *   *Speak*: "What is the summary of this?"
    *   *Listen*: The AI will answer you via audio!
3.  **Chat**: You can also see the text chat history.

## ⚠️ Troubleshooting
- **"Python not found"**: Reinstall Python and make sure to check "Add to PATH".
- **AI doesn't reply**: Make sure Ollama is running (you should see the Ollama icon in your taskbar).
