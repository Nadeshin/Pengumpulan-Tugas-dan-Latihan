// Program Inventaris Harta Kekayaan Maba - Versi 1
// Dibuat oleh Dywa Rusydi R. (A11.2026.16980)
// Tanggal pembuatan: 23 September 2026

#include <iostream>
#include <iomanip> // Mengatur format tampilan angka.
#include <string>
using namespace std;

// Menyimpan nama dan merek setiap barang.
string namaSepatu, merekSepatu;
string namaJam, merekJam;
string namaTas, merekTas;
string namaHP, merekHP;

// Menyimpan harga beli, nilai saat ini, dan hasil perhitungan.
double hargaBeliSepatu, nilaiSekarangSepatu;
double hargaBeliJam, nilaiSekarangJam;
double hargaBeliTas, nilaiSekarangTas;
double hargaBeliHP, nilaiSekarangHP;
double totalHargaBeli, totalNilaiSekarang, penyusutan;

// Fungsi utama program.
int main() {

    // Menampilkan nilai uang tanpa angka di belakang koma.
    cout << fixed << setprecision(0);

    // Data sepatu

    namaSepatu = "Sepatu Sneakers";
    merekSepatu = "New Balance";
    hargaBeliSepatu = 250000;
    nilaiSekarangSepatu = 200000;
    
    // Data jam tangan

    namaJam = "Jam tangan Digital";
    merekJam = "laxafit";
    hargaBeliJam = 200000;
    nilaiSekarangJam = 120000;

    // Data tas

    namaTas = "Tas kuliah";
    merekTas = "Extreme";
    hargaBeliTas = 170000;
    nilaiSekarangTas = 90000;

    // Data handphone

    namaHP = "Smartphone";
    merekHP = "OPPO";
    hargaBeliHP = 2000000;
    nilaiSekarangHP = 1200000;

    // Hitung total harga, nilai sekarang, dan penyusutan

    totalHargaBeli = hargaBeliSepatu + hargaBeliJam + hargaBeliTas + hargaBeliHP;
    totalNilaiSekarang = nilaiSekarangSepatu + nilaiSekarangJam + nilaiSekarangTas + nilaiSekarangHP;
    penyusutan = totalHargaBeli - totalNilaiSekarang;

    // Tampilkan hasil

    cout << "==========================================" << endl;
    cout << "         RINGKASAN HARTA KEKAYAAN         " << endl;
    cout << "==========================================" << endl;

    cout << endl;

    cout << "Total harga Beli       : Rp. " << totalHargaBeli << endl;
    cout << "Total Nilai Sekarang   : Rp. " << totalNilaiSekarang << endl;
    cout << "Nilai Penyusutan       : Rp. " << penyusutan << endl;

    cout << endl;

    return 0;
}