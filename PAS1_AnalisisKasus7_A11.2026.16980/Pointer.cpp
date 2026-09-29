// Program Kasus 7 - Latihan Pointer
// Dibuat oleh Dywa Rusydi Rakhawastu (A11.2026.16980)
// Tanggal pembuatan: 29 September 2026

#include <iostream>
using namespace std;

// Fungsi utama program.
int main() {
    // Deklarasi awal sesuai PDF.
    int i = 15, *p, *q;

    // p menunjuk ke i, ubah isi lewat pointer.
    p = &i;
    *p = 20;

    // 1. Tampilkan nilai i.
    cout << "Nilai i: " << i << endl;

    // 2. Ubah i jadi 50, tampilkan i dan p.
    i = 50;
    cout << "Nilai i: " << i << endl;
    cout << "Alamat p: " << p << endl;
    cout << "Nilai *p: " << *p << endl;

    // 3. q menunjuk ke i, ubah isi lewat q.
    q = &i;
    *q = 100;

    // 3a. Tampilkan i, p, dan q.
    cout << "Nilai i: " << i << endl;
    cout << "Nilai *p: " << *p << endl;
    cout << "Nilai *q: " << *q << endl;
    cout << "Alamat p: " << p << endl;
    cout << "Alamat q: " << q << endl;

    return 0;
}
