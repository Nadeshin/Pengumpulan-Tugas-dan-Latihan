// Program Kasus 1 Soal 1 - Review Variable (y = a^3 + 7)
// Dibuat oleh Dywa Rusydi Rakhawastu (A11.2026.16980)
// Tanggal pembuatan: 29 September 2026

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

//Nomor 1
// Menyimpan nilai a dan hasil y.
int a;
int y;

// Fungsi utama program.
int main() {

    // Isi nilai a dan hitung y.
    a = 10;
    y = pow(a, 3) + 7;

    // Tampilkan hasil.
    cout << y;

    return 0;
}
