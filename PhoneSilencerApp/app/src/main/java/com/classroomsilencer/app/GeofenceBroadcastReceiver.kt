package com.classroomsilencer.app

import android.app.NotificationManager
import android.content.BroadcastReceiver
import android.content.Context
import android.content.Intent
import android.media.AudioManager
import android.util.Log
import com.google.android.gms.location.Geofence
import com.google.android.gms.location.GeofenceStatusCodes
import com.google.android.gms.location.GeofencingEvent

class GeofenceBroadcastReceiver : BroadcastReceiver() {

    override fun onReceive(context: Context, intent: Intent) {
        val geofencingEvent = GeofencingEvent.fromIntent(intent)
        
        if (geofencingEvent == null) {
            Log.e("GeofenceReceiver", "Geofencing event is null")
            return
        }

        if (geofencingEvent.hasError()) {
            val errorMessage = GeofenceStatusCodes.getStatusCodeString(geofencingEvent.errorCode)
            Log.e("GeofenceReceiver", "Geofence error: $errorMessage")
            return
        }

        val geofenceTransition = geofencingEvent.geofenceTransition

        when (geofenceTransition) {
            Geofence.GEOFENCE_TRANSITION_ENTER -> {
                // Entered classroom - silence phone
                setPhoneToSilent(context)
                Log.d("GeofenceReceiver", "Entered classroom - Phone silenced")
            }
            Geofence.GEOFENCE_TRANSITION_EXIT -> {
                // Left classroom - restore ringer
                setPhoneToNormal(context)
                Log.d("GeofenceReceiver", "Left classroom - Ringer restored")
            }
        }
    }

    private fun setPhoneToSilent(context: Context) {
        val notificationManager = context.getSystemService(Context.NOTIFICATION_SERVICE) as NotificationManager
        
        if (notificationManager.isNotificationPolicyAccessGranted) {
            // Set to silent/vibrate mode
            val audioManager = context.getSystemService(Context.AUDIO_SERVICE) as AudioManager
            audioManager.ringerMode = AudioManager.RINGER_MODE_VIBRATE
            
            Log.d("GeofenceReceiver", "Phone set to VIBRATE mode")
        } else {
            Log.e("GeofenceReceiver", "No notification policy access granted")
        }
    }

    private fun setPhoneToNormal(context: Context) {
        val notificationManager = context.getSystemService(Context.NOTIFICATION_SERVICE) as NotificationManager
        
        if (notificationManager.isNotificationPolicyAccessGranted) {
            // Restore normal ringer
            val audioManager = context.getSystemService(Context.AUDIO_SERVICE) as AudioManager
            audioManager.ringerMode = AudioManager.RINGER_MODE_NORMAL
            
            Log.d("GeofenceReceiver", "Phone set to NORMAL mode")
        } else {
            Log.e("GeofenceReceiver", "No notification policy access granted")
        }
    }
}
