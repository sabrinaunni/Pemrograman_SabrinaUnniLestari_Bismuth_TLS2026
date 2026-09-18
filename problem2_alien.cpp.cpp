#include <iostream>

// Fungsi buatan sendiri untuk mengecek apakah sebuah karakter adalah huruf kapital (A-Z)
bool customIsUpper(char c) {
    return (c >= 'A' && c <= 'Z');
}

// Fungsi buatan sendiri untuk mengecek apakah sebuah karakter adalah huruf kecil (a-z)
bool customIsLower(char c) {
    return (c >= 'a' && c <= 'z');
}

void encryptAlienMessage(const char pesanAsli[]) {
    // Menghitung panjang array karakter secara manual
    int length = 0;
    while (pesanAsli[length] != '\0') {
        length++;
    }

    int nilaiSebelumnya = 0;

    std::cout << "Pesan hasil sandi  : ";

    // Proses karakter demi karakter
    for (int i = 0; i < length; ++i) {
        char c = pesanAsli[i];

        if (customIsUpper(c) || customIsLower(c)) {
            // Tentukan basis huruf ('A' atau 'a') untuk hitungan 1-26
            char baseChar = customIsUpper(c) ? 'A' : 'a';

            // 1. Dapatkan Nilai Asli (A/a = 1, B/b = 2, ..., Z/z = 26)
            int nilaiAsli = c - baseChar + 1;

            // 2. Hitung Nilai Baru dengan menambahkan pergeseran sebelumnya
            int nilaiBaru = nilaiAsli + nilaiSebelumnya;

            // 3. Koreksi manual jika pergeseran melewati batas 26 tanpa library cmath/modulo standar
            if (nilaiBaru > 26) {
                nilaiBaru = ((nilaiBaru - 1) % 26) + 1;
            }

            // 4. Ubah kembali nilai numerik menjadi karakter alfabet
            char charBaru = baseChar + (nilaiBaru - 1);
            std::cout << charBaru;

            // 5. Simpan nilai asli karakter saat ini untuk iterasi berikutnya
            nilaiSebelumnya = nilaiAsli;
        } else {
            // Jika bukan huruf (seperti spasi), langsung dicetak tanpa di-sandi
            std::cout << c;
        }
    }
    std::cout << "\n";
}

int main() {
    // Alokasi buffer array karakter untuk menampung input string teks
    char inputPesan[500];

    std::cout << "=== Problem 2: Alien-In-The-Middle ===\n";
    std::cout << "Masukkan pesan asli: ";
    
    // Menggunakan cin.getline agar spasi di dalam teks input tetap terbaca
    std::cin.getline(inputPesan, 500); 

    encryptAlienMessage(inputPesan);

    return 0;
}
