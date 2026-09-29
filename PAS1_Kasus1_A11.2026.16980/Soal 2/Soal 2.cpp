// Program Kasus 1 Soal 2 - Review Variable (y = ax^2 + bx + c)
// Dibuat oleh Dywa Rusydi Rakhawastu (A11.2026.16980)
// Tanggal pembuatan: 29 September 2026

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

//Nomor 2
// Menyimpan koefisien dan hasil y.
int a, b, c, x, y;

// Fungsi utama program.
int main() {

    // Isi nilai a, b, c, dan x.
    a = 3;
    b = 4;
    c = 5;
    x = 6;

    // Hitung y.
    y = a * pow(x, 2) + b * x + c;

    // Tampilkan hasil.
    cout << y;

    return 0;
}
