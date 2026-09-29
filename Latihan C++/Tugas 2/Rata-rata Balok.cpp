// Judul: Program untuk menghitung rata-rata volume dari dua buah balok.
// Dibuat oleh Dywa Rusydi R. (A11.2026.16980)
// Tanggal: 25 September 2026

#include <iostream>
#include <string>
using namespace std;

// Deklarasi variabel utama untuk data balok pertama dan balok kedua.
int panjang1, lebar1, tinggi1;
int panjang2, lebar2, tinggi2;
double volume1, volume2, rataRata;

int main() {
    // Menentukan ukuran balok pertama.
    panjang1 = 3;
    lebar1 = 4;
    tinggi1 = 5;

    // Menentukan ukuran balok kedua.
    panjang2 = 7;
    lebar2 = 8;
    tinggi2 = 9;

    // Menghitung volume masing-masing balok.
    // Rumus volume balok = panjang x lebar x tinggi.
    volume1 = panjang1 * lebar1 * tinggi1;
    volume2 = panjang2 * lebar2 * tinggi2;

    // Menghitung rata-rata volume kedua balok.
    // Rumus rata-rata = (volume1 + volume2) / 2.
    rataRata = (volume1 + volume2) / 2;

    // Menampilkan judul program.
    cout << "===============================================" << endl;
    cout << "    Menghitung Rata-Rata Volume Kedua Balok    " << endl;
    cout << "===============================================" << endl;

    cout << endl;

    // Menampilkan data balok pertama.
    cout << "-----------------------------------------------" << endl;
    cout << "Balok 1:" << endl;
    cout << "Panjang = " << panjang1 << endl;
    cout << "Lebar = " << lebar1 << endl;
    cout << "Tinggi = " << tinggi1 << endl;
    cout << "Volume = " << volume1 << endl;

    cout << endl;

    // Menampilkan data balok kedua.
    cout << "Balok 2:" << endl;
    cout << "Panjang = " << panjang2 << endl;
    cout << "Lebar = " << lebar2 << endl;
    cout << "Tinggi = " << tinggi2 << endl;
    cout << "Volume = " << volume2 << endl;
    cout << "-----------------------------------------------" << endl;

    cout << endl;

    // Menampilkan hasil rata-rata volume.
    cout << "-----------------------------------------------" << endl;
    cout << "Rata-rata volume kedua balok = " << rataRata << endl;
    cout << "-----------------------------------------------" << endl;

    return 0;
}