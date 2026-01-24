@echo off
echo ===================================================
echo      Starting Offline Audio Notebook (Tricher Clone)
echo ===================================================

echo [1/3] Checking Dependencies...
python -m pip install -r backend/requirements.txt
if %errorlevel% neq 0 (
    echo Error: Could not install python dependencies.
    echo Please ensure Python 3.10+ is installed and added to PATH.
    pause
    exit /b
)

echo [2/3] Launching Backend Server...
start "" http://localhost:8000
python backend/main.py

pause
