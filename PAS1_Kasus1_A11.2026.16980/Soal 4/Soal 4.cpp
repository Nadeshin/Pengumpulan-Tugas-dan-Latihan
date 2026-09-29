// Program Kasus 1 Soal 4 - Konversi Suhu Celcius
// Dibuat oleh Dywa Rusydi Rakhawastu (A11.2026.16980)
// Tanggal pembuatan: 29 September 2026

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// Menyimpan suhu Celcius, Fahrenheit, Kelvin, Reamur.
float F, K, R;
int C;

// Fungsi utama program.
int main() {
    // Input suhu Celcius.
    cout << "Masukan suhu dalam Celcius: ";
    cin >> C;

    // Hitung konversi suhu.
    F = (9.0 / 5.0) * C + 32;
    K = C + 273;
    R = (4.0 / 5.0) * C;

    // Tampilkan hasil.
    cout << "Suhu dalam Fahrenheit: " << F << endl;
    cout << "Suhu dalam Kelvin: " << K << endl;
    cout << "Suhu dalam Reamur: " << R << endl;

    return 0;
}
