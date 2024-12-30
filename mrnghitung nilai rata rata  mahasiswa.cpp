#include <iostream>
using namespace std;

float hitungRataRata(float nilai[], int jumlahMK) {
    float total = 0;
    for (int i = 0; i < jumlahMK; i++) {
        total += nilai[i];  // Menjumlahkan semua nilai
    }
    return total / jumlahMK;  // Menghitung rata-rata
}

int main() {
    int jumlahMK;  // Jumlah mata kuliah
    cout << "Program Penghitung Rata-rata Nilai Mahasiswa\n";

    // Input jumlah mata kuliah
    cout << "Masukkan jumlah mata kuliah yang diambil: ";
    cin >> jumlahMK;

    // Menyimpan nilai mata kuliah
    float nilai[jumlahMK];

    // Input nilai untuk setiap mata kuliah
    for (int i = 0; i < jumlahMK; i++) {
        cout << "Masukkan nilai untuk mata kuliah " << i + 1 << ": ";
        cin >> nilai[i];
    }

    // Hitung rata-rata nilai
    float rataRata = hitungRataRata(nilai, jumlahMK);

    // Menampilkan hasil
    cout << "\nRata-rata nilai mahasiswa adalah: " << rataRata << endl;

    // Menentukan kelulusan berdasarkan rata-rata
    if (rataRata >= 60) {
        cout << "Status: Lulus" << endl;
    } else {
        cout << "Status: Tidak Lulus" << endl;
    }

    return 0;
}

