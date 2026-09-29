// Judul: Laporan Kegiatan Running - Nadia (1 Minggu).
// Dibuat oleh Dywa Rusydi R. (A11.2026.16980)
// Tanggal: 27 September 2026
#include <iostream>
#include <string>
using namespace std;

//Kamus - data lari Nadia seminggu
string bulan = "September";
int tahun = 2025;
double jarak = 2.5;

string hari1 = "Senin";
int tanggal = 1;
int jamB1 = 7;
int menitB1 = 10;
int detikB1 = 0;
int jamF1 = 7;
int menitF1 = 38;
int detikF1 = 20;
int durasiMenit1 = 28;
int durasiDetik1 = 20;
string catatan1 = "Cuaca cerah";

string hari2 = "Selasa";
int tanggal2 = 2;
int jamB2 = 7;
int menitB2 = 12;
int detikB2 = 30;
int jamF2 = 7;
int menitF2 = 41;
int detikF2 = 15;
int durasiMenit2 = 28;
int durasiDetik2 = 45;
string catatan2 = "Sedikit ramai";

string hari3 = "Rabu";
int tanggal3 = 3;
int jamB3 = 7;
int menitB3 = 5;
int detikB3 = 45;
int jamF3 = 7;
int menitF3 = 33;
int detikF3 = 50;
int durasiMenit3 = 28;
int durasiDetik3 = 5;
string catatan3 = "Lancar";

string hari4 = "Kamis";
int tanggal4 = 4;
int jamB4 = 7;
int menitB4 = 15;
int detikB4 = 20;
int jamF4 = 7;
int menitF4 = 44;
int detikF4 = 10;
int durasiMenit4 = 28;
int durasiDetik4 = 50;
string catatan4 = "Sedikit hujan";

string hari5 = "Jumat";
int tanggal5 = 5;
int jamB5 = 7;
int menitB5 = 8;
int detikB5 = 10;
int jamF5 = 7;
int menitF5 = 36;
int detikF5 = 40;
int durasiMenit5 = 28;
int durasiDetik5 = 30;
string catatan5 = "Lancar";

// ubah ke detik biar gampang dijumlah
int totalDetik1 = 0 * 3600 + durasiMenit1 * 60 + durasiDetik1;
int totalDetik2 = 0 * 3600 + durasiMenit2 * 60 + durasiDetik2;
int totalDetik3 = 0 * 3600 + durasiMenit3 * 60 + durasiDetik3;
int totalDetik4 = 0 * 3600 + durasiMenit4 * 60 + durasiDetik4;
int totalDetik5 = 0 * 3600 + durasiMenit5 * 60 + durasiDetik5;

int totalMenitDurasi = durasiMenit1 + durasiMenit2 + durasiMenit3 + durasiMenit4 + durasiMenit5;
int totalDetikDurasi = durasiDetik1 + durasiDetik2 + durasiDetik3 + durasiDetik4 + durasiDetik5;
int totalDurasiDetik = totalDetik1 + totalDetik2 + totalDetik3 + totalDetik4 + totalDetik5;

// rata-rata = total dibagi 5
int rataRataDetik = totalDurasiDetik / 5;

int konverensiMenit = rataRataDetik / 60;
int konverensiDetik = rataRataDetik % 60;

//Deskripsi - tampilkan laporan + rata-rata
int main() {
    int totalJam = totalDurasiDetik / 3600;
    int totalMenit = (totalDurasiDetik % 3600) / 60;
    int totalDetik = totalDurasiDetik % 60;

    cout << "==============================================" << endl;
    cout << "LAPORAN KEGIATAN RUNNING NADIA 1 MINGGU" << endl;
    cout << "Periode : 1-5 " << bulan << " " << tahun << " | Jarak : " << jarak << " km/hari" << endl;
    cout << "==============================================" << endl;
    cout << "| No | Hari      | Berangkat | Finish   | Durasi | Catatan       |" << endl;
    cout << "------------------------------------------------------------------" << endl;
    cout << "| 1  | " << hari1 << ", " << tanggal << "  | 0" << jamB1 << ":" << menitB1 << ":0" << detikB1 << "  | 0" << jamF1 << ":" << menitF1 << ":" << detikF1 << " | " << durasiMenit1 << ":" << durasiDetik1 << "  | " << catatan1 << "   |" << endl;
    cout << "| 2  | " << hari2 << ", " << tanggal2 << " | 0" << jamB2 << ":" << menitB2 << ":" << detikB2 << "  | 0" << jamF2 << ":" << menitF2 << ":" << detikF2 << " | " << durasiMenit2 << ":" << durasiDetik2 << "  | " << catatan2 << " |" << endl;
    cout << "| 3  | " << hari3 << ", " << tanggal3 << "   | 0" << jamB3 << ":0" << menitB3 << ":" << detikB3 << "  | 0" << jamF3 << ":" << menitF3 << ":" << detikF3 << " | " << durasiMenit3 << ":0" << durasiDetik3 << "  | " << catatan3 << "        |" << endl;
    cout << "| 4  | " << hari4 << ", " << tanggal4 << "  | 0" << jamB4 << ":" << menitB4 << ":" << detikB4 << "  | 0" << jamF4 << ":" << menitF4 << ":" << detikF4 << " | " << durasiMenit4 << ":" << durasiDetik4 << "  | " << catatan4 << " |" << endl;
    cout << "| 5  | " << hari5 << ", " << tanggal5 << "  | 0" << jamB5 << ":0" << menitB5 << ":" << detikB5 << "  | 0" << jamF5 << ":" << menitF5 << ":" << detikF5 << " | " << durasiMenit5 << ":" << durasiDetik5 << "  | " << catatan5 << "        |" << endl;
    cout << "------------------------------------------------------------------" << endl;
    cout << "Total : " << totalMenitDurasi << " menit + " << totalDetikDurasi << " detik = " << totalDurasiDetik << " detik (0" << totalJam << ":" << totalMenit << ":" << totalDetik << ")" << endl;
    cout << "Rata-rata (" << rataRataDetik << " detik) : 00:" << konverensiMenit << ":" << konverensiDetik << endl;
    cout << "==============================================" << endl;
}
