#!/bin/bash

echo "🚀 Starting Full Semester Setup..."

# Install AI Excel Backend Dependencies
echo "Installing AI Excel dependencies..."
pip install -r ai-excel-app/backend/requirements.txt

# Install Offline Audio Notebook Backend Dependencies
echo "Installing Audio Notebook dependencies..."
pip install -r offline-notebook/backend/requirements.txt

# Install Node.js Dependencies (if any)
# npm install --prefix portfolio/

# Install Ollama (for audio notebook)
if ! command -v ollama &> /dev/null
then
    echo "Installing Ollama..."
    curl -fsSL https://ollama.com/install.sh | sh
fi

echo "✅ Setup Complete. Your Codespace is ready!"
