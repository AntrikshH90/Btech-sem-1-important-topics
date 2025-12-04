# Automatic Phone Silencer (Classroom Mode)

This is a native Android application designed to automatically silence the phone when entering a specific location (like a classroom) and restore the ringer when leaving.

## Why Native Android?
Web applications (websites) do not have the security permissions to modify system settings like the phone's Ringer Mode (Silent/Vibrate/Normal). This functionality requires a native app installed on the device.

## Prerequisites
- **Android Studio**: You need to download and install Android Studio to build and run this app.
- **Android Device**: A physical Android phone is best for testing GPS/Geofencing, but the Emulator can also simulate location.

## How to Build and Run
1. Open **Android Studio**.
2. Select **Open** and navigate to this `PhoneSilencerApp` folder.
3. Wait for Gradle to sync.
4. Connect your phone via USB (enable Developer Options > USB Debugging).
5. Click the green **Run** button (Play icon).

## How to Use
1. Grant **Location** and **Notification Policy** permissions when asked.
   - *Note: You may need to manually allow "Do Not Disturb" access in settings if the prompt doesn't take you there directly, depending on the Android version.*
2. Stand in the classroom (or target location).
3. Open the app and click **"Set Class Location"**. This saves your current GPS coordinates.
4. Click **"Enable Silencer"**.
5. The app will now monitor the geofence.
   - **Enter Class**: Phone goes to Vibrate/Silent.
   - **Exit Class**: Phone goes to Normal Ringer.

## Project Structure
- `src/main/java/.../MainActivity.kt`: The main screen and logic for setting location.
- `src/main/java/.../GeofenceBroadcastReceiver.kt`: Background handler that triggers the mode change.
- `src/main/AndroidManifest.xml`: Permissions declaration.
