import whisper
import os
import glob
import torch

print("Carregando modelo...")
model = whisper.load_model("tiny", device="cuda")
print(torch.cuda.is_available())

print("Transcrevendo áudio .wav ...")
files = glob.glob("*.wav")
most_recent = max(files, key=os.path.getctime)
result = model.transcribe(f"{most_recent}", language="en", fp16=True)

print("Text detect:")
print(result["text"])
