// App Logic
const micBtn = document.getElementById('mic-btn');
const listeningText = document.getElementById('listening-text');
const chatHistory = document.getElementById('chat-history');
const fileInput = document.getElementById('file-input');
const statusText = document.getElementById('status-text');
const statusDot = document.querySelector('.dot');

// State
let isListening = false;
let recognition = null;
let synthesis = window.speechSynthesis;
const loopCheckbox = document.getElementById('loop-mode');

// Initialize Speech Recognition
if ('webkitSpeechRecognition' in window || 'SpeechRecognition' in window) {
    const SpeechRecognition = window.SpeechRecognition || window.webkitSpeechRecognition;
    recognition = new SpeechRecognition();
    recognition.continuous = false; // We restart manually for loop
    recognition.interimResults = false;
    recognition.lang = 'en-US';

    recognition.onstart = () => {
        isListening = true;
        micBtn.classList.add('active');
        listeningText.classList.remove('hidden');
        listeningText.textContent = "Listening...";
    };

    recognition.onend = () => {
        isListening = false;
        micBtn.classList.remove('active');
        listeningText.classList.add('hidden');
    };

    recognition.onresult = (event) => {
        const transcript = event.results[0][0].transcript;
        addMessage(transcript, 'user');
        // Send to Backend
        fetchAnswer(transcript);
    };

    recognition.onerror = (event) => {
        console.error("Speech error", event.error);
        listeningText.textContent = "Error: " + event.error;
        isListening = false;
        micBtn.classList.remove('active');
    };

} else {
    alert("Speech Recognition not supported in this browser. Use Chrome.");
}

// Event Listeners
micBtn.addEventListener('click', () => {
    if (!recognition) return;
    if (isListening) {
        recognition.stop();
    } else {
        recognition.start();
    }
});

fileInput.addEventListener('change', async (e) => {
    if (e.target.files.length > 0) {
        uploadFile(e.target.files[0]);
    }
});

// Functions
function addMessage(text, sender) {
    const div = document.createElement('div');
    div.classList.add('message', sender === 'user' ? 'user-msg' : 'ai-msg');
    div.textContent = text;
    chatHistory.appendChild(div);
    chatHistory.scrollTop = chatHistory.scrollHeight;
}

function speak(text) {
    if (synthesis.speaking) synthesis.cancel();
    const utterance = new SpeechSynthesisUtterance(text);

    // Auto-restart mic after speaking if Loop Mode is ON
    utterance.onend = () => {
        if (loopCheckbox.checked && recognition) {
            setTimeout(() => {
                try { recognition.start(); } catch (e) { }
            }, 500); // Short delay to prevent self-hearing
        }
    };

    synthesis.speak(utterance);
}

async function fetchAnswer(question) {
    try {
        const response = await fetch('http://localhost:8000/api/chat', {
            method: 'POST',
            headers: { 'Content-Type': 'application/json' },
            body: JSON.stringify({ message: question })
        });
        const data = await response.json();
        const answer = data.answer || "Sorry, I couldn't understand.";

        addMessage(answer, 'ai');
        speak(answer);
    } catch (err) {
        console.error(err);
        addMessage("Error connecting to backend.", 'ai');
        speak("Error connecting to backend.");
    }
}

async function uploadFile(file) {
    const formData = new FormData();
    formData.append('file', file);

    statusText.textContent = "Uploading...";

    try {
        const res = await fetch('http://localhost:8000/api/upload', {
            method: 'POST',
            body: formData
        });
        const data = await res.json();

        if (data.status === 'ok') {
            statusText.textContent = "Online (" + data.filename + ")";
            statusDot.classList.add('online');
            const sourceItem = document.createElement('div');
            sourceItem.textContent = "📄 " + data.filename;
            sourceItem.style.padding = "10px";
            sourceItem.style.color = "#fff";
            document.getElementById('sources-list').appendChild(sourceItem);
        }
    } catch (err) {
        statusText.textContent = "Upload Failed";
    }
}
