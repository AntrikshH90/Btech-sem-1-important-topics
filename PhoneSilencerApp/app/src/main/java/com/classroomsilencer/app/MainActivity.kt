package com.classroomsilencer.app

import android.Manifest
import android.app.NotificationManager
import android.app.PendingIntent
import android.content.Context
import android.content.Intent
import android.content.pm.PackageManager
import android.location.Location
import android.os.Build
import android.os.Bundle
import android.provider.Settings
import android.widget.Toast
import androidx.appcompat.app.AppCompatActivity
import androidx.core.app.ActivityCompat
import androidx.core.content.ContextCompat
import com.classroomsilencer.app.databinding.ActivityMainBinding
import com.google.android.gms.location.*

class MainActivity : AppCompatActivity() {

    private lateinit var binding: ActivityMainBinding
    private lateinit var fusedLocationClient: FusedLocationProviderClient
    private lateinit var geofencingClient: GeofencingClient
    private var classroomLat: Double = 0.0
    private var classroomLng: Double = 0.0
    private val GEOFENCE_RADIUS = 100f // 100 meters
    private val LOCATION_PERMISSION_REQUEST_CODE = 1001
    private val BACKGROUND_LOCATION_PERMISSION_REQUEST_CODE = 1002

    private val geofencePendingIntent: PendingIntent by lazy {
        val intent = Intent(this, GeofenceBroadcastReceiver::class.java)
        PendingIntent.getBroadcast(
            this, 
            0, 
            intent, 
            PendingIntent.FLAG_UPDATE_CURRENT or PendingIntent.FLAG_MUTABLE
        )
    }

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        binding = ActivityMainBinding.inflate(layoutInflater)
        setContentView(binding.root)

        fusedLocationClient = LocationServices.getFusedLocationProviderClient(this)
        geofencingClient = LocationServices.getGeofencingClient(this)

        loadSavedLocation()
        updateUI()

        binding.btnSetLocation.setOnClickListener {
            if (checkLocationPermissions()) {
                getCurrentLocationAndSave()
            } else {
                requestLocationPermissions()
            }
        }

        binding.btnEnableSilencer.setOnClickListener {
            if (classroomLat != 0.0 && classroomLng != 0.0) {
                if (checkNotificationPolicyAccess()) {
                    if (checkLocationPermissions() && checkBackgroundLocationPermission()) {
                        createGeofence()
                    } else {
                        requestBackgroundLocationPermission()
                    }
                } else {
                    requestNotificationPolicyAccess()
                }
            } else {
                Toast.makeText(this, "Please set classroom location first!", Toast.LENGTH_SHORT).show()
            }
        }

        binding.btnDisableSilencer.setOnClickListener {
            removeGeofence()
        }
    }

    private fun loadSavedLocation() {
        val prefs = getSharedPreferences("ClassroomSilencer", Context.MODE_PRIVATE)
        classroomLat = prefs.getString("lat", "0.0")?.toDouble() ?: 0.0
        classroomLng = prefs.getString("lng", "0.0")?.toDouble() ?: 0.0
    }

    private fun saveLocation(lat: Double, lng: Double) {
        val prefs = getSharedPreferences("ClassroomSilencer", Context.MODE_PRIVATE)
        prefs.edit().apply {
            putString("lat", lat.toString())
            putString("lng", lng.toString())
            apply()
        }
        classroomLat = lat
        classroomLng = lng
    }

    private fun updateUI() {
        if (classroomLat != 0.0 && classroomLng != 0.0) {
            binding.tvLocationStatus.text = "Classroom Location Set\nLat: %.6f, Lng: %.6f".format(classroomLat, classroomLng)
        } else {
            binding.tvLocationStatus.text = "No classroom location set"
        }
    }

    private fun getCurrentLocationAndSave() {
        if (ActivityCompat.checkSelfPermission(
                this,
                Manifest.permission.ACCESS_FINE_LOCATION
            ) != PackageManager.PERMISSION_GRANTED
        ) {
            return
        }

        fusedLocationClient.lastLocation.addOnSuccessListener { location: Location? ->
            if (location != null) {
                saveLocation(location.latitude, location.longitude)
                updateUI()
                Toast.makeText(this, "Classroom location saved!", Toast.LENGTH_SHORT).show()
            } else {
                Toast.makeText(this, "Unable to get current location. Please try again.", Toast.LENGTH_SHORT).show()
            }
        }
    }

    private fun createGeofence() {
        val geofence = Geofence.Builder()
            .setRequestId("classroom_geofence")
            .setCircularRegion(classroomLat, classroomLng, GEOFENCE_RADIUS)
            .setExpirationDuration(Geofence.NEVER_EXPIRE)
            .setTransitionTypes(Geofence.GEOFENCE_TRANSITION_ENTER or Geofence.GEOFENCE_TRANSITION_EXIT)
            .build()

        val geofencingRequest = GeofencingRequest.Builder()
            .setInitialTrigger(GeofencingRequest.INITIAL_TRIGGER_ENTER)
            .addGeofence(geofence)
            .build()

        if (ActivityCompat.checkSelfPermission(
                this,
                Manifest.permission.ACCESS_FINE_LOCATION
            ) != PackageManager.PERMISSION_GRANTED
        ) {
            return
        }

        geofencingClient.addGeofences(geofencingRequest, geofencePendingIntent).run {
            addOnSuccessListener {
                Toast.makeText(this@MainActivity, "Automatic Silencer Enabled!", Toast.LENGTH_SHORT).show()
                binding.tvStatus.text = "Status: Active - Monitoring classroom"
            }
            addOnFailureListener {
                Toast.makeText(this@MainActivity, "Failed to enable: ${it.message}", Toast.LENGTH_LONG).show()
            }
        }
    }

    private fun removeGeofence() {
        geofencingClient.removeGeofences(geofencePendingIntent).run {
            addOnSuccessListener {
                Toast.makeText(this@MainActivity, "Automatic Silencer Disabled", Toast.LENGTH_SHORT).show()
                binding.tvStatus.text = "Status: Inactive"
            }
            addOnFailureListener {
                Toast.makeText(this@MainActivity, "Failed to disable: ${it.message}", Toast.LENGTH_SHORT).show()
            }
        }
    }

    private fun checkLocationPermissions(): Boolean {
        return ContextCompat.checkSelfPermission(
            this,
            Manifest.permission.ACCESS_FINE_LOCATION
        ) == PackageManager.PERMISSION_GRANTED
    }

    private fun checkBackgroundLocationPermission(): Boolean {
        return if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.Q) {
            ContextCompat.checkSelfPermission(
                this,
                Manifest.permission.ACCESS_BACKGROUND_LOCATION
            ) == PackageManager.PERMISSION_GRANTED
        } else {
            true
        }
    }

    private fun requestLocationPermissions() {
        ActivityCompat.requestPermissions(
            this,
            arrayOf(
                Manifest.permission.ACCESS_FINE_LOCATION,
                Manifest.permission.ACCESS_COARSE_LOCATION
            ),
            LOCATION_PERMISSION_REQUEST_CODE
        )
    }

    private fun requestBackgroundLocationPermission() {
        if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.Q) {
            ActivityCompat.requestPermissions(
                this,
                arrayOf(Manifest.permission.ACCESS_BACKGROUND_LOCATION),
                BACKGROUND_LOCATION_PERMISSION_REQUEST_CODE
            )
        }
    }

    private fun checkNotificationPolicyAccess(): Boolean {
        val notificationManager = getSystemService(Context.NOTIFICATION_SERVICE) as NotificationManager
        return notificationManager.isNotificationPolicyAccessGranted
    }

    private fun requestNotificationPolicyAccess() {
        val intent = Intent(Settings.ACTION_NOTIFICATION_POLICY_ACCESS_SETTINGS)
        startActivity(intent)
        Toast.makeText(this, "Please grant 'Do Not Disturb' access to this app", Toast.LENGTH_LONG).show()
    }

    override fun onRequestPermissionsResult(
        requestCode: Int,
        permissions: Array<out String>,
        grantResults: IntArray
    ) {
        super.onRequestPermissionsResult(requestCode, permissions, grantResults)
        when (requestCode) {
            LOCATION_PERMISSION_REQUEST_CODE -> {
                if (grantResults.isNotEmpty() && grantResults[0] == PackageManager.PERMISSION_GRANTED) {
                    getCurrentLocationAndSave()
                } else {
                    Toast.makeText(this, "Location permission is required", Toast.LENGTH_SHORT).show()
                }
            }
            BACKGROUND_LOCATION_PERMISSION_REQUEST_CODE -> {
                if (grantResults.isNotEmpty() && grantResults[0] == PackageManager.PERMISSION_GRANTED) {
                    createGeofence()
                } else {
                    Toast.makeText(this, "Background location is required for automatic silencing", Toast.LENGTH_LONG).show()
                }
            }
        }
    }
}
