// Program Kasus 5 - ADT Structure (struct)
// Dibuat oleh Dywa Rusydi Rakhawastu (A11.2026.16980)
// Tanggal pembuatan: 29 September 2026

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// Menyimpan dua nilai x dan y.
struct nilai
{
    int x;
    int y;
};


// Fungsi utama program.
int main() {

    // Buat variable n1 bertipe nilai.
    nilai n1;

    // Isi nilai x dan y.
    n1.x = 2;
    n1.y = 3;
    cout << n1.x << n1.y;
}
