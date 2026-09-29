// Program Kasus 5 - ADT Structure (typedef struct)
// Dibuat oleh Dywa Rusydi Rakhawastu (A11.2026.16980)
// Tanggal pembuatan: 29 September 2026

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// Menyimpan dua nilai x dan y dengan typedef.
typedef struct nilai
{
    int x;
    int y;
} Nilai;

// Fungsi utama program.
int main() {

    // Buat variable n1 bertipe Nilai.
    Nilai n1;
    n1.x = 2;
    n1.y = 3;

    // Tampilkan nilai.
    cout << n1.x << n1.y;
    
    return 0;
}
