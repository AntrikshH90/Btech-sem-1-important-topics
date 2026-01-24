# 🎓 B.Tech Semester 1 - Full Workspace

This repository contains all my Semester 1 notes, assignments, and projects. Optimized for **GitHub Codespaces**.

## 📁 Apps Included

### 1. AI Excel App (Handwriting to XLSX)
- **Backend:** `ai-excel-app/backend/` (FastAPI)
- **Frontend:** `ai-excel-app/frontend/` (PWA)
- **Run:** 
  1. Terminal 1: `python -m ai-excel-app.backend.app.main`
  2. Terminal 2: `python3 -m http.server 3000 --directory ai-excel-app/frontend/`

### 2. Offline Audio Notebook
- **Backend:** `offline-notebook/backend/`
- **Frontend:** `offline-notebook/frontend/`
- **Run:** 
  1. Terminal 1: `ollama run llama3` (Ensure ollama is running)
  2. Terminal 2: `python3 offline-notebook/backend/main.py`
  3. Terminal 3: `python3 -m http.server 3001 --directory offline-notebook/frontend/`

### 3. Naruto Game
- **Directory:** `naruto_game/`
- **Run:** `python3 -m http.server 3002 --directory naruto_game/`

### 4. Portfolio
- **Directory:** `portfolio/`
- **Run:** `python3 -m http.server 3003 --directory portfolio/`

---

## 📚 Study Material
All notes and assignments are located in the `semester 1 notes/` folder.

## 🚀 Codespaces Setup
This repo is pre-configured with a `.devcontainer`. Opening it in Codespaces will automatically:
1. Install all Python dependencies.
2. Install Node.js.
3. Install Ollama.
4. Forward all necessary ports.
