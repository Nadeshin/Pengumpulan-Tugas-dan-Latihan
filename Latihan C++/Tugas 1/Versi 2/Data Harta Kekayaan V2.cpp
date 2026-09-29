// Program Inventaris Harta Kekayaan Maba - Versi 2
// Dibuat oleh Dywa Rusydi R. (A11.2026.16980)
// Tanggal pembuatan: 23 September 2026

#include <iostream>
#include <iomanip> // Mengatur format tampilan angka.
#include <limits>
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

    // Memasukkan data sepatu.

    cout << "==========================================" << endl;
    cout << "                DATA SEPATU               " << endl;
    cout << "==========================================" << endl;

    cout << endl;

    cout << "Masukan Nama Sepatu : ";
    getline(cin, namaSepatu);
    cout << "Masukan Merek Sepatu : ";
    getline(cin, merekSepatu);
    cout << "Masukan Harga Beli Sepatu : ";
    cin >> hargaBeliSepatu;
    cout << "Masukan Nilai Sekarang Sepatu : ";
    cin >> nilaiSekarangSepatu;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << endl;
    
    // Memasukkan data jam tangan.

    cout << "==========================================" << endl;
    cout << "              DATA JAM TANGAN             " << endl;
    cout << "==========================================" << endl;

    cout << endl;

    cout << "Masukan Nama Jam : ";
    getline(cin, namaJam);
    cout << "Masukan Merek Jam : ";
    getline(cin, merekJam);
    cout << "Masukan Harga Beli Jam : ";
    cin >> hargaBeliJam;
    cout << "Masukan Nilai Sekarang Jam : ";
    cin >> nilaiSekarangJam;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << endl;

    // Memasukkan data tas.

    cout << "==========================================" << endl;
    cout << "                 DATA TAS                 " << endl;
    cout << "==========================================" << endl;

    cout << endl;

    cout << "Masukan Nama Tas : ";
    getline(cin, namaTas);
    cout << "Masukan Merek Tas : ";
    getline(cin, merekTas);
    cout << "Masukan Harga Beli Tas : ";
    cin >> hargaBeliTas;
    cout << "Masukan Nilai Sekarang Tas : ";
    cin >> nilaiSekarangTas;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << endl;

    // Memasukkan data handphone.

    cout << "==========================================" << endl;
    cout << "            DATA HP (HANDPHONE)           " << endl;
    cout << "==========================================" << endl;

    cout << endl;

    cout << "Masukan Nama HP : ";
    getline(cin, namaHP);
    cout << "Masukan Merek HP : ";
    getline(cin, merekHP);
    cout << "Masukan Harga Beli HP : ";
    cin >> hargaBeliHP;
    cout << "Masukan Nilai Sekarang HP : ";
    cin >> nilaiSekarangHP;

    cout << endl;

    // Menghitung total harga beli, nilai saat ini, dan penyusutan.

    totalHargaBeli = hargaBeliSepatu + hargaBeliJam + hargaBeliTas + hargaBeliHP;
    totalNilaiSekarang = nilaiSekarangSepatu + nilaiSekarangJam + nilaiSekarangTas + nilaiSekarangHP;
    penyusutan = totalHargaBeli - totalNilaiSekarang;

    // Menampilkan ringkasan hasil perhitungan.

    cout << endl;

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