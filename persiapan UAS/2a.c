#include <stdio.h>

int main() {
    // Inisialisasi dua array satu dimensi dengan ukuran 100 (10x10)
    int A[100];
    int B[100];
    int C[100];

    // Mengisi A dan B dengan nilai (dalam contoh ini, angka 1 untuk A dan angka 2 untuk B)
    for (int i = 0; i < 100; i++) {
        A[i] = 2; //angka bisa diisi sesuai yang diinginkan
        B[i] = 2; //angka bisa diisi sesuai yang diinginkan
    }

    // Menambahkan dua array dan menyimpan hasilnya di array C
    for (int i = 0; i < 100; i++) {
        C[i] = A[i] + B[i];
    }

    // Menampilkan hasil penjumlahan
    printf("Hasil Penjumlahan:\n");
    for (int i = 0; i < 1; i++) {
        for (int j = 0; j < 1; j++) {
            printf("%d ", C[i + j]);
        }
        printf("\n");
    }

    return 0;
}