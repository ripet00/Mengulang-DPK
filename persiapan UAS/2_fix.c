#include <stdio.h>

int main() {
    // Inisialisasi dua array satu dimensi dengan ukuran 100 (10x10)
    int A[4];
    int B[4];
    int C[4];

    // Mengisi A dan B dengan nilai (dalam contoh ini, angka 1 untuk A dan angka 2 untuk B)
    printf(" Masukkan nilai Array A\n");
    for (int i = 0; i < 4; i++) {
        printf("A[%d]: ",i);
        scanf("%d", &A[i]);
    }
    
    printf(" Masukkan nilai Array B\n");
    for (int i = 0; i < 4; i++) {
        printf("B[%d]: ",i);
        scanf("%d", &B[i]);
    }
    
    // Menambahkan dua array dan menyimpan hasilnya di array C
    for (int i = 0; i < 4; i++) {
        C[i] = A[i] + B[i];
    }

    // Menampilkan hasil penjumlahan
    printf("Hasil Penjumlahan:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j <1; j++) {
            printf("%d ", C[i]);
        }
        printf("\n");
    }

    return 0;
}