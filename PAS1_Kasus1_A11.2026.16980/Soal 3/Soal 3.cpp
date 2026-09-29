// Program Kasus 1 Soal 3 - Jumlah dan Rata-rata 5 Bilangan
// Dibuat oleh Dywa Rusydi Rakhawastu (A11.2026.16980)
// Tanggal pembuatan: 29 September 2026

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// Menyimpan 5 bilangan dan hasil jumlah.
int bilangan1, bilangan2, bilangan3, bilangan4, bilangan5, hasil;
// Menyimpan rata-rata.
double rataRata;

// Fungsi utama program.
int main() {

    // Input 5 bilangan.
    cout << "Masukkan bilangan pertama: ";
    cin >> bilangan1;
    cout << "Masukkan bilangan kedua: ";
    cin >> bilangan2;
    cout << "Masukkan bilangan ketiga: ";
    cin >> bilangan3;
    cout << "Masukkan bilangan keempat: ";
    cin >> bilangan4;
    cout << "Masukkan bilangan kelima: ";
    cin >> bilangan5;

    // Hitung jumlah dan rata-rata.
    hasil = bilangan1 + bilangan2 + bilangan3 + bilangan4 + bilangan5;
    rataRata = hasil / 5.0;

    // Tampilkan hasil.
    cout << "Hasil penjumlahan: " << hasil << endl;
    cout << "Rata-rata: " << rataRata << endl;

    return 0;
}
