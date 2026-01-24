package com.lucifer.offlinenotebook

import android.Manifest
import android.content.Intent
import android.content.pm.PackageManager
import android.os.Bundle
import android.speech.RecognitionListener
import android.speech.RecognizerIntent
import android.speech.SpeechRecognizer
import android.speech.tts.TextToSpeech
import android.widget.Toast
import androidx.activity.ComponentActivity
import androidx.activity.compose.setContent
import androidx.activity.result.contract.ActivityResultContracts
import androidx.compose.foundation.background
import androidx.compose.foundation.layout.*
import androidx.compose.foundation.lazy.LazyColumn
import androidx.compose.foundation.lazy.items
import androidx.compose.material3.*
import androidx.compose.runtime.*
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.unit.dp
import androidx.core.content.ContextCompat
import kotlinx.coroutines.CoroutineScope
import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.launch
import java.util.Locale

class MainActivity : ComponentActivity(), TextToSpeech.OnInitListener {

    private var tts: TextToSpeech? = null
    private var speechRecognizer: SpeechRecognizer? = null
    private lateinit var ragEngine: RAGEngine
    
    private val scope = CoroutineScope(Dispatchers.Main)
    private var isLooping = mutableStateOf(false)

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        
        ragEngine = RAGEngine(this)
        tts = TextToSpeech(this, this)
        
        // Request Permissions
        val requestPermissionLauncher = registerForActivityResult(ActivityResultContracts.RequestMultiplePermissions()) { /* handle */ }
        requestPermissionLauncher.launch(arrayOf(Manifest.permission.RECORD_AUDIO, Manifest.permission.BLUETOOTH_CONNECT))

        initSpeechRecognizer()

        setContent {
            OfflineNotebookTheme {
                MainScreen(
                    onStartMic = { startListening() },
                    onStopMic = { stopListening() },
                    onLoadModel = { scope.launch { 
                        val result = ragEngine.initialize() 
                        Toast.makeText(this@MainActivity, result, Toast.LENGTH_LONG).show()
                    }}
                )
            }
        }
    }

    private fun initSpeechRecognizer() {
        speechRecognizer = SpeechRecognizer.createSpeechRecognizer(this)
        speechRecognizer?.setRecognitionListener(object : RecognitionListener {
            override fun onReadyForSpeech(params: Bundle?) {}
            override fun onBeginningOfSpeech() {}
            override fun onRmsChanged(rmsdB: Float) {}
            override fun onBufferReceived(buffer: ByteArray?) {}
            override fun onEndOfSpeech() {}
            override fun onError(error: Int) {
                if (isLooping.value) startListening() // Restart on error if looping
            }
            override fun onResults(results: Bundle?) {
                val data = results?.getStringArrayList(SpeechRecognizer.RESULTS_RECOGNITION)
                val text = data?.get(0) ?: ""
                if (text.isNotEmpty()) {
                    processUserInput(text)
                }
            }
            override fun onPartialResults(partialResults: Bundle?) {}
            override fun onEvent(eventType: Int, params: Bundle?) {}
        })
    }

    private fun startListening() {
        val intent = Intent(RecognizerIntent.ACTION_RECOGNIZE_SPEECH)
        intent.putExtra(RecognizerIntent.EXTRA_LANGUAGE_MODEL, RecognizerIntent.LANGUAGE_MODEL_FREE_FORM)
        intent.putExtra(RecognizerIntent.EXTRA_LANGUAGE, Locale.getDefault())
        speechRecognizer?.startListening(intent)
    }

    private fun stopListening() {
        speechRecognizer?.stopListening()
    }

    private fun processUserInput(text: String) {
        scope.launch {
            val response = ragEngine.generateResponse(text)
            speak(response)
        }
    }

    private fun speak(text: String) {
        tts?.speak(text, TextToSpeech.QUEUE_FLUSH, null, "UtteranceID")
    }

    override fun onInit(status: Int) {
        if (status == TextToSpeech.SUCCESS) {
            tts?.language = Locale.US
            tts?.setOnUtteranceProgressListener(object : android.speech.tts.UtteranceProgressListener() {
                override fun onStart(utteranceId: String?) {}
                override fun onDone(utteranceId: String?) {
                    // Loop back to listening after speaking is done
                    if (isLooping.value) {
                        runOnUiThread { startListening() }
                    }
                }
                override fun onError(utteranceId: String?) {}
            })
        }
    }

    @Composable
    fun MainScreen(onStartMic: () -> Unit, onStopMic: () -> Unit, onLoadModel: () -> Unit) {
        var isListening by remember { mutableStateOf(false) }

        Column(
            modifier = Modifier.fillMaxSize().background(Color(0xFF121212)).padding(16.dp),
            horizontalAlignment = Alignment.CenterHorizontally
        ) {
            Text("Offline Notebook AI", style = MaterialTheme.typography.headlineMedium, color = Color.White)
            Spacer(modifier = Modifier.height(20.dp))
            
            Button(onClick = onLoadModel) {
                Text("1. Load AI Model")
            }

            Spacer(modifier = Modifier.weight(1f))

            Row(verticalAlignment = Alignment.CenterVertically) {
                Text("Hands-Free Loop", color = Color.LightGray)
                Checkbox(checked = isLooping.value, onCheckedChange = { isLooping.value = it })
            }

            Button(
                onClick = {
                    isListening = !isListening
                    if (isListening) onStartMic() else onStopMic()
                },
                modifier = Modifier.size(120.dp),
                colors = ButtonDefaults.buttonColors(containerColor = if (isListening) Color.Red else Color.Cyan)
            ) {
                Text(if (isListening) "STOP" else "START MIC", color = Color.Black)
            }
            Spacer(modifier = Modifier.height(40.dp))
        }
    }
}

@Composable
fun OfflineNotebookTheme(content: @Composable () -> Unit) {
    MaterialTheme(
        colorScheme = darkColorScheme(
            primary = Color(0xFF00F2FE),
            onPrimary = Color.Black,
            surface = Color(0xFF1E1E1E)
        ),
        content = content
    )
}
