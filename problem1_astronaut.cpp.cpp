#include <iostream>

void solveLastAstronaut(int N, int K) {
    // Membuat array statis secara dinamis untuk menampung astronot
    // Nilai 1 berarti aktif (masih ada di lingkaran), 0 berarti sudah dieliminasi
    int* exists = new int[N];
    for (int i = 0; i < N; ++i) {
        exists[i] = 1; 
    }

    std::cout << "Urutan astronot yang dieliminasi: ";
    
    int currentIndex = 0;
    int remaining = N;

    // Proses eliminasi hingga tersisa 1 astronot
    while (remaining > 1) {
        int count = 0;
        
        // Lakukan simulasi hitungan K hanya pada astronot yang masih aktif
        while (count < K) {
            if (exists[currentIndex] == 1) {
                count++;
                if (count == K) {
                    break; // Keluar jika hitungan ke-K tercapai
                }
            }
            // Bergerak memutar ke elemen berikutnya (kembali ke 0 jika mentok)
            currentIndex = (currentIndex + 1) % N;
        }

        // Nomor urut astronot yang dieliminasi (berbasis index 1)
        int eliminatedAstronaut = currentIndex + 1;
        std::cout << eliminatedAstronaut << " ";

        // Tandai astronot sudah tereliminasi dan kurangi sisa astronot
        exists[currentIndex] = 0;
        remaining--;

        // Tentukan aturan perubahan nilai K secara dinamis berdasarkan nomor astronot
        if (eliminatedAstronaut % 2 == 0) {
            K += 2; // Jika genap, K bertambah 2
        } else {
            K -= 1; // Jika ganjil, K berkurang 1
        }

        // Validasi batas bawah nilai K (K tidak boleh kurang dari 2)
        if (K < 2) {
            K = 2;
        }

        // Perhitungan berikutnya dimulai tepat setelah posisi yang dieliminasi
        currentIndex = (currentIndex + 1) % N;
    }

    // Mencari 1 astronot terakhir yang masih bertahan (bernilai 1)
    int lastAstronaut = -1;
    for (int i = 0; i < N; ++i) {
        if (exists[i] == 1) {
            lastAstronaut = i + 1;
            break;
        }
    }

    std::cout << "\nAstronot terakhir yang bertahan: " << lastAstronaut << "\n";

    // Membersihkan alokasi memori
    delete[] exists;
}

int main() {
    int N, K;
    std::cout << "=== Problem 1: The Last Astronaut ===\n";
    std::cout << "Masukkan jumlah astronot (N): ";
    std::cin >> N;
    std::cout << "Masukkan nilai hitungan awal (K): ";
    std::cin >> K;

    if (N <= 0 || K <= 0) {
        std::cout << "Input harus lebih besar dari 0.\n";
        return 1;
    }

    solveLastAstronaut(N, K);
    return 0;
}
