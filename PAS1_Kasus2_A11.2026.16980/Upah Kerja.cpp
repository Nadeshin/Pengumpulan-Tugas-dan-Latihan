// Program Kasus 2 - Upah Lembur Karyawan
// Dibuat oleh Dywa Rusydi Rakhawastu (A11.2026.16980)
// Tanggal pembuatan: 29 September 2026

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// Menyimpan jam kerja, lembur, dan upah per jam.
int jamKerja, lemburKerja;
float upah;

// Menyimpan hasil perhitungan upah.
float upahRegular, tambahanPersen, overpay, totalUpah;

// Fungsi utama program.
int main() {
    
    // Input jam kerja, lembur, dan upah.
    cout << "Masukkan jam kerja: ";
    cin >> jamKerja;
    cout << "Masukkan jam lembur: ";
    cin >> lemburKerja;
    cout << "Masukkan upah per jam: ";
    cin >> upah;

    // Hitung upah reguler.
    upahRegular = jamKerja * upah;

    // Tentukan tambahan persen lembur.
    if (lemburKerja >= 30) {
        tambahanPersen = 0.40;
    } else {
        tambahanPersen = 0.20;
    }
    
    // Hitung overpay dan total upah.
    overpay = (jamKerja - lemburKerja) * upah * 0.30;
    totalUpah = upahRegular + overpay;
    
    // Tampilkan hasil.
    cout << "Upah reguler: " << upahRegular << endl;
    cout << "Overpay: " << overpay << endl;
    cout << "Total upah: " << totalUpah << endl;

    return 0;
}
