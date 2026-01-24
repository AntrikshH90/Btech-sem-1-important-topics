// AI Excel PWA - Frontend Logic

const API_BASE_URL = 'http://localhost:8000'; // Change this when deploying to Azure

const fileInput = document.getElementById('fileInput');
const dropzone = document.getElementById('dropzone');
const previewContainer = document.getElementById('previewContainer');
const imagePreview = document.getElementById('imagePreview');
const removeImage = document.getElementById('removeImage');
const generateBtn = document.getElementById('generateBtn');
const loader = document.getElementById('loader');
const resultCard = document.getElementById('resultCard');
const downloadBtn = document.getElementById('downloadBtn');
const resetBtn = document.getElementById('resetBtn');
const previewTable = document.getElementById('previewTable');
const instructionsInput = document.getElementById('instructions');

let selectedFile = null;

// Handle File Selection
dropzone.addEventListener('click', () => fileInput.click());

dropzone.addEventListener('dragover', (e) => {
    e.preventDefault();
    dropzone.classList.add('border-blue-500', 'bg-blue-500/5');
});

dropzone.addEventListener('dragleave', () => {
    dropzone.classList.remove('border-blue-500', 'bg-blue-500/5');
});

dropzone.addEventListener('drop', (e) => {
    e.preventDefault();
    dropzone.classList.remove('border-blue-500', 'bg-blue-500/5');
    if (e.dataTransfer.files.length) {
        handleFile(e.dataTransfer.files[0]);
    }
});

fileInput.addEventListener('change', (e) => {
    if (e.target.files.length) {
        handleFile(e.target.files[0]);
    }
});

function handleFile(file) {
    if (!file.type.startsWith('image/')) {
        alert('Please upload an image file.');
        return;
    }
    selectedFile = file;
    const reader = new FileReader();
    reader.onload = (e) => {
        imagePreview.src = e.target.result;
        dropzone.classList.add('hidden');
        previewContainer.classList.remove('hidden');
    };
    reader.readAsDataURL(file);
}

removeImage.addEventListener('click', () => {
    selectedFile = null;
    fileInput.value = '';
    previewContainer.classList.add('hidden');
    dropzone.classList.remove('hidden');
});

// Generate Excel Action
generateBtn.addEventListener('click', async () => {
    if (!selectedFile) return;

    // Show Loader
    previewContainer.classList.add('hidden');
    loader.classList.remove('hidden');
    resultCard.classList.add('hidden');

    const formData = new FormData();
    formData.append('file', selectedFile);
    formData.append('instructions', instructionsInput.value || 'Convert this table to excel');

    try {
        const response = await fetch(`${API_BASE_URL}/upload`, {
            method: 'POST',
            body: formData
        });

        if (!response.ok) throw new Error('Failed to process image');

        const result = await response.json();
        displayResults(result);
    } catch (error) {
        console.error(error);
        alert('Error: ' + error.message);
        previewContainer.classList.remove('hidden');
    } finally {
        loader.classList.add('hidden');
    }
});

function displayResults(result) {
    resultCard.classList.remove('hidden');
    downloadBtn.href = `${API_BASE_URL}${result.excel_url}`;

    // Clear old preview
    previewTable.innerHTML = '';

    if (!result.data || !result.data.length) return;

    // Build Table Header
    const headers = Object.keys(result.data[0]);
    const thead = document.createElement('thead');
    const headerRow = document.createElement('tr');
    headers.forEach(h => {
        const th = document.createElement('th');
        th.textContent = h;
        headerRow.appendChild(th);
    });
    thead.appendChild(headerRow);
    previewTable.appendChild(thead);

    // Build Table Body
    const tbody = document.createElement('tbody');
    result.data.forEach(row => {
        const tr = document.createElement('tr');
        headers.forEach(h => {
            const td = document.createElement('td');
            td.textContent = row[h] || '';
            tr.appendChild(td);
        });
        tbody.appendChild(tr);
    });
    previewTable.appendChild(tbody);
}

resetBtn.addEventListener('click', () => {
    selectedFile = null;
    fileInput.value = '';
    resultCard.classList.add('hidden');
    dropzone.classList.remove('hidden');
    instructionsInput.value = '';
});
