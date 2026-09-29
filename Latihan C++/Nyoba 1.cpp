//Judul: Data Motor
//Nama, Merek, Warna,dll
//Dibuat oleh Dywa 23 September 2026 di Burjo
#include <iostream>
using namespace std;
//Kamus
string namaMotor, merek, tipe, warna, fungsi; // Untuk string Nama, Merek, Tipe, Warna, dan Fungsi
int tahun, kapasitasMesin; // Untuk integer Tahun Pembuatan dan Kapasitas Mesin
float hargaBeli, nilaiSekarang; // Untuk jumlah real Harga Beli dan Nilai Sekarang
char kodeMotor; // Untuk
bool pajakAktif;
//Deskripsi
main() {
    namaMotor = "Vario 125";
    merek = "Honda";
    tipe = "125CC";
    kodeMotor = 'A';
    warna = "Putih";
    tahun = 2021;
    kapasitasMesin = 125;
    hargaBeli = 21;
    nilaiSekarang = 21;
    pajakAktif = true;
    fungsi = "Kegiatan Sehari-hari";

    cout << "===============================================" << endl;
    cout << "                   DATA MOTOR                  " << endl;
    cout << "===============================================" << endl;

    cout << endl;

    cout << "Nama Motor             : " << namaMotor << endl;
    cout << "Merek Motor            : " << merek << endl;
    cout << "Tipe Motor             : " << tipe << endl;
    cout << "Kode Motor             : " << kodeMotor << endl;
    cout << "Warna Motor            : " << warna << endl;
    cout << "Tahun Motor            : " << tahun << endl;
    cout << "Kapasitas Mesin Motor  : " << kapasitasMesin << endl;
    cout << "Harga Beli Motor       : " << hargaBeli << endl;
    cout << "Nilai Sekarang         : " << nilaiSekarang << endl;
    cout << "Pajak Aktif Motor      : " << pajakAktif << endl;
    cout << "Fungsi Motor           : " << fungsi << endl;

    return 0;
}
