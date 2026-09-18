# Tugas Logika Pemrograman - Fase 1

Repositori ini berisi penyelesaian logika dan implementasi kode untuk dua buah studi kasus pemrograman. Solusi dirancang menggunakan pendekatan algoritma dasar dan diimplementasikan ke dalam bahasa **C++ murni** dengan pembatasan penggunaan pustaka (*library*) standar.

## 📂 Konten Repositori
* **`tugas_fase1.pdf`**: Dokumen utama yang berisi 1 Pseudocode, 1 Flowchart, serta penjelasan logika mendalam (minimal 2 paragraf) untuk masing-masing problem.
* **`problem1_astronaut.cpp`**: Kode solusi C++ untuk masalah eliminasi lingkaran astronot yang dinamis.
* **`problem2_alien.cpp`**: Kode solusi C++ untuk sistem sandi enkripsi berantai karakter.

---

## 🚀 Penjelasan Singkat Masalah

### Problem 1: The Last Astronaut
* **Konsep**: Variasi dari *Josephus Problem* (simulasi eliminasi melingkar).
* **Aturan Khusus**: Nilai langkah hitungan (\(K\)) berubah secara dinamis setelah setiap eliminasi berdasarkan nomor urut astronot yang keluar (genap: \(K = K + 2\); ganjil: \(K = K - 1\); dengan batas minimum \(K \geq 2\)).
* **Pendekatan Kode**: Menggunakan simulasi perulangan melingkar berbasis *Array Flag* manual tanpa menggunakan fungsi `std::vector`.

### Problem 2: Alien-In-The-Middle
* **Konsep**: Enkripsi teks (*Cipher*) berbasis pergeseran karakter kumulatif.
* **Aturan Khusus**: Setiap huruf digeser maju berdasarkan urutan alfabet (A=1 s.d Z=26) dari huruf asli pada posisi tepat sebelumnya. Huruf pertama tidak mengalami perubahan posisi.
* **Pendekatan Kode**: Menggunakan manipulasi *C-style Array Character* (`char[]`) dan operasi ASCII manual tanpa menggunakan pustaka `<string>` maupun `<cctype>`.

---

## 🛠️ Cara Menjalankan Kode C++

Pastikan Anda sudah menginstal compiler C++ (seperti `g++`).

1. **Kompilasi Program:**
   ```bash
   g++ problem1_astronaut.cpp -o astronaut
   g++ problem2_alien.cpp -o alien
   ```

2. **Jalankan Program:**
   * **Problem 1:** `./astronaut`
   * **Problem 2:** `./alien`
