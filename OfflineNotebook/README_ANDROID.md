# How to Build Your Android AI App

## 1. Prerequisites
You need **Android Studio** (Hedgehog 2023 or newer is recommended for AI).
*If you have an older version, the code might show errors. Share them, and I will fix it!*
[Download Here](https://developer.android.com/studio)

## 2. Open the Project
1.  Launch Android Studio.
2.  Click **Open**.
3.  Select the folder: `Desktop/program/OfflineNotebook`.
4.  Let it "Sync Gradle" (it will download dependencies).

**Option 1: Hugging Face (Easier)**
1.  Go to: [Hugging Face - Google Gemma TFLite](https://huggingface.co/google/gemma-2b-it-tflite/tree/main)
2.  Look for the file: **`gemma-2b-it-gpu-int4.bin`** (or similar `.bin` file).
3.  Click the **Download** button (⬇️).

**Option 2: Kaggle**
1.  Go to [Kaggle Models](https://www.kaggle.com/models/google/gemma/frameworks/mediapipe).
2.  Select **MediaPipe** in dropdown.
3.  Choose **`gemma-2b-it-gpu-int4`**.
4.  Download.

## 4. Push Model to Phone
1.  Connect your Android Phone via USB.
2.  Enable **USB Debugging** on your phone (Developer Options).
3.  Open Terminal in Android Studio and run:
    ```bash
    adb shell mkdir -p /data/local/tmp/llm/
    adb push path/to/gemma-2b-it-gpu-int4.bin /data/local/tmp/llm/
    ```
    *(Replace `path/to/...` with where you downloaded it)*

## 5. Run the App
1.  Click the Green **Play** button in Android Studio.
2.  The App will install on your phone.
3.  Click "Start Chat".
