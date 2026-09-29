// Judul: Program untuk menghitung volume balok
// Dibuat oleh Dywa Rusydi R. (A11.2026.16980)
// Tanggal: 24 September 2026
#include <iostream>
#include <string>
using namespace std;

// Deklarasi variabel yang akan digunakan
double panjang, lebar;
double tinggi;
double volume;

// Program utama
int main() {
    // Nilai ukuran balok
    panjang = 3;
    lebar = 4;
    tinggi = 5;

    // Hitung volume balok dengan rumus panjang x lebar x tinggi
    volume = panjang * lebar * tinggi;

    // Tampilkan hasil volume ke layar
    cout << "============================" << endl;
    cout << "     Hasil Volume Balok     " << endl;
    cout << "============================" << endl;

    cout << endl;

    cout << "Panjang = " << panjang << endl;
    cout << "Lebar = " << lebar << endl;
    cout << "Tinggi = " << tinggi << endl;

    cout << endl;

    cout << "---------------------------" << endl;

    cout << "Volume : " << volume << " cm" << endl;

    return 0;
}