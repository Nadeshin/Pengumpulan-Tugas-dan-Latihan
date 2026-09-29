// Program Kasus 4 - Array Terbesar, Terkecil, Jumlah, Rata-rata
// Dibuat oleh Dywa Rusydi Rakhawastu (A11.2026.16980)
// Tanggal pembuatan: 29 September 2026

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// Fungsi utama program.
int main() {

    // Input jumlah elemen array.
    int n;
    cout << "masukan jumlah elemen array: ";
    cin >> n;

    // Menyimpan elemen array.
    int A[100];

    // Input tiap elemen array.
    for (int i = 0; i < n; i++) {
        cout << "masukan input ke-" << i + 1 << ": ";
        cin >> A[i];
    }

    // Menyimpan max, min, dan jumlah.
    int max = A[0];
    int min = A[0];
    int jumlah = 0;

    // Hitung jumlah, cari max dan min.
    for (int i = 0; i < n; i++) {
        jumlah = jumlah + A[i];

        if (A[i] > max) {
            max = A[i];
        }
        if (A[i] < min) {
            min = A[i];
        }
    }

    // Hitung rata-rata.
    float rata_rata = (float) jumlah / n;

    // Tampilkan isi array.
    cout << "\nHasil Array: ";
    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
    cout << endl;

    // Tampilkan hasil.
    cout << "Nilai terbesar: " << max << endl;
    cout << "Nilai terkecil: " << min << endl;
    cout << "Jumlah array: " << jumlah << endl;
    cout << "Rata-rata: " << rata_rata << endl;

    return 0;
}
