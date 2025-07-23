import sounddevice as sd
from scipy.io.wavfile import write
import datetime 

fs = 16000  # taxa de amostragem (16 kHz é ótimo para Whisper)
duracao = 50  # segundos
print("Gravando por 50 segundos...")
audio = sd.rec(int(duracao * fs), samplerate=fs, channels=1, dtype='int16')
sd.wait()

# Gera nome do arquivo com datetime, incluindo extensão .wav
filename = f"date_{datetime.datetime.now().strftime('%Y%m%d_%H%M%S')}.wav"
write(filename, fs, audio)
print(f"Áudio salvo como {filename}")
