# Tugas Logika Pemrograman - Fase 1

Repositori ini dibuat untuk memenuhi tugas Fase 1 yang berisi penyelesaian logika dan implementasi kode dari dua problem yang diberikan. Semua kode program ditulis menggunakan bahasa C++ murni dengan hanya memanfaatkan library `<iostream>` (tanpa library tambahan atau fungsi bawaan).

## Isi Repositori
* **`tugas_fase1.pdf`** - Berisi 1 pseudocode (Problem 1), 1 flowchart (Problem 2), dan penjelasan logika tertulis masing-masing minimal 2 paragraf.
* **`problem1_astronaut.cpp`** - Kode program C++ untuk simulasi eliminasi astronot lingkaran (The Last Astronaut).
* **`problem2_alien.cpp`** - Kode program C++ untuk enkripsi pesan berantai (Alien-In-The-Middle).

## Ringkasan Solusi

### Problem 1: The Last Astronaut
Penyelesaian menggunakan konsep *Josephus Problem* dengan aturan eliminasi dinamis (nilai pergeseran K berubah tergantung nomor astronot yang keluar). Karena tidak boleh memakai `<vector>`, struktur lingkaran disiasati secara manual menggunakan array statis dan sistem penanda (*flag active/inactive*).

### Problem 2: Alien-In-The-Middle
Sistem sandi enkripsi di mana setiap huruf bergeser maju berdasarkan nilai alfabet huruf asli tepat sebelum posisi tersebut. Karena keterbatasan penggunaan `<string>` dan `<cctype>`, pemrosesan teks dilakukan manual memakai *C-style array character* (`char[]`) dan manipulasi nilai ASCII.

## Cara Menjalankan Program

Gunakan compiler C++ seperti `g++` untuk menjalankan kode program.

Kompilasi kode melalui terminal:
```bash
g++ problem1_astronaut.cpp -o astronaut
g++ problem2_alien.cpp -o alien
```

Jalankan executable file:
```bash
./astronaut
./alien
```
