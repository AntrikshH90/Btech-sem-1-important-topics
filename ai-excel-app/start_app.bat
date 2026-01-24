@echo off
echo ===================================================
3: echo      Starting AI Excel App (Handwritten to XLSX)
echo ===================================================

echo [1/2] Launching Backend Server...
start "AI Excel Backend" cmd /k "cd backend && venv\Scripts\python -m app.main"

echo [2/2] Launching Frontend...
echo To use the app, open index.html in your browser.
echo Or, starting a simple python web server for the frontend to avoid CORS...
start "AI Excel Frontend" cmd /k "cd frontend && python -m http.server 3000"

timeout /t 5
start http://localhost:3000

echo Application is running!
echo Backend: http://localhost:8000
echo Frontend: http://localhost:3000
pause
