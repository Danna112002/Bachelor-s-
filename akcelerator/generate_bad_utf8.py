import os

base_path = "/home/anula/OneDrive/26L/Inżynierka/akcelerator/"

# Upewnij się, że katalog docelowy istnieje
os.makedirs(base_path, exist_ok=True)

# ==========================================
# 1. EXPLOITY - ROZBITE NA OSOBNE PLIKI BINARNE
# ==========================================

# 1A. Niedozwolony bajt C0 (Overlong ASCII)
data_c0 = bytearray(b"ERR_C0: " + bytes([0xC0, 0xAF]) + b"\n")
with open(os.path.join(base_path, "exploit_c0_overlong.bin"), "wb") as f:
    f.write(data_c0)

# 1B. Przekroczenie limitu U+10FFFF (Bajt wiodący > F4)
data_f5 = bytearray(b"ERR_F5: " + bytes([0xF5, 0x80, 0x80, 0x80]) + b"\n")
with open(os.path.join(base_path, "exploit_f5_limit.bin"), "wb") as f:
    f.write(data_f5)

# 1C. Overlong 3-bajtowy (E0 z bajtem kontynuacji < A0)
data_e0 = bytearray(b"ERR_E0_OVERLONG: " + bytes([0xE0, 0x80, 0xAF]) + b"\n")
with open(os.path.join(base_path, "exploit_e0_overlong.bin"), "wb") as f:
    f.write(data_e0)

# 1D. Overlong 4-bajtowy (F0 z bajtem kontynuacji < 90)
data_f0 = bytearray(b"ERR_F0_OVERLONG: " + bytes([0xF0, 0x8F, 0xBF, 0xBF]) + b"\n")
with open(os.path.join(base_path, "exploit_f0_overlong.bin"), "wb") as f:
    f.write(data_f0)

# 1E. Brak kontynuacji w środku pliku (zastąpienie kontynuacji spacjami)
data_trunc_mid = bytearray(b"ERR_TRUNC_MID: " + bytes([0xE2, 0x20, 0x20]) + b"\n")
with open(os.path.join(base_path, "exploit_trunc_mid.bin"), "wb") as f:
    f.write(data_trunc_mid)

# 1F. Próba przemycenia połówki surogatu UTF-16 (ED z bajtem kontynuacji >= A0)
data_surrogate = bytearray(b"ERR_SURROGATE: " + bytes([0xED, 0xA0, 0x80]) + b"\n")
with open(os.path.join(base_path, "exploit_surrogate.bin"), "wb") as f:
    f.write(data_surrogate)




# ==========================================
# 2. BŁĄD BAJTU STARTOWEGO
# ==========================================
data_start_err = bytearray(b"Poczatek OK, a potem zly znak startowy: ")
# 0x80 to osierocony bajt kontynuacji, 0xFF to nielegalny bajt całkowicie poza specyfikacją
data_start_err.extend(bytes([0x80, 0xFF])) 
data_start_err.extend(b" i reszta pliku.\n")
with open(os.path.join(base_path, "corrupted_start_err.bin"), "wb") as f:
    f.write(data_start_err)


# ==========================================
# 3. UCIĘTY ZNAK NA KOŃCU PLIKU (TLAST)
# ==========================================
data_tlast_err = bytearray(b"Wszystko fajnie, ale ten plik urwie sie w srodku znaku ")
# Zaczynamy znak 3-bajtowy (E2 82 AC to symbol Euro), ale podajemy tylko dwa bajty przed EOF
data_tlast_err.extend(bytes([0xE2, 0x82])) 
with open(os.path.join(base_path, "corrupted_tlast_err.bin"), "wb") as f:
    f.write(data_tlast_err)

print("Wygenerowano pomyślnie zestaw plików dla testbencha:")
print(f" - exploit_c0_overlong.bin ({len(data_c0)} B)")
print(f" - exploit_f5_limit.bin ({len(data_f5)} B)")
print(f" - exploit_e0_overlong.bin ({len(data_e0)} B)")
print(f" - exploit_f0_overlong.bin ({len(data_f0)} B)")
print(f" - exploit_trunc_mid.bin ({len(data_trunc_mid)} B)")
print(f" - exploit_surrogate.bin ({len(data_surrogate)} B)")
print(f" - corrupted_start_err.bin ({len(data_start_err)} B)")
print(f" - corrupted_tlast_err.bin ({len(data_tlast_err)} B)")
