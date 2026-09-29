// Program Kasus 3 - Perulangan Angka
// Dibuat oleh Dywa Rusydi Rakhawastu (A11.2026.16980)
// Tanggal pembuatan: 29 September 2026

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// Menyimpan batas bawah dan atas.
int a, b;

// Fungsi utama program.
int main() {

    // Input angka terendah dan tertinggi.
    cout << "Masukan angka terendah: ";
    cin >> a;
    cout << "Masukan angka tertinggi: ";
    cin >> b;

    // Jika a lebih besar dari b maka b dikali 2.
    if (a > b) {
        b = b * 2;
    }

    // Tampilkan deret menurun dari b ke a.
    for (int i = b; i >= a; i--) {
        cout << i << " ";
    }

    return 0;
}
