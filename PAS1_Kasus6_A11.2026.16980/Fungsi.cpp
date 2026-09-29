// Program Kasus 6 - Fungsi dan Prosedur
// Dibuat oleh Dywa Rusydi Rakhawastu (A11.2026.16980)
// Tanggal pembuatan: 29 September 2026

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// Hitung luas persegi n*n.
int luasPersegi(int n) {
    return n * n;
}

// Cek ganjil, true jika ganjil.
bool isGanjil(int n) {
    return n % 2 != 0;
}

// Cek genap, true jika genap.
bool isGenap(int n) {
    return n % 2 == 0;
}

// Hitung jumlah deret 1 sampai N.
int sumN(int N) {
    int jumlah = 0;
    for (int i = 1; i <= N; i++) {
        jumlah = jumlah + i;
    }
    return jumlah;
}

// Hitung rata-rata dari sumN.
float avgN(int N) {
    return (float) sumN(N) / N;
}

// Fungsi utama program.
int main() {
    // Tampilkan hasil tiap fungsi.
    cout << "Luas Persegi: " << luasPersegi(5) << endl;
    cout << "Apakah Ganjil: " << isGanjil(5) << endl;
    cout << "Apakah Genap: " << isGenap(5) << endl;

    cout << "Jumlah seluruh nilai (1 sampai 5): " << sumN(5) << endl;
    cout << "Rata-rata: " << avgN(5) << endl;
}
