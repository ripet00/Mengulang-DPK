#include <stdio.h>
#include <stdlib.h>

int main() {
    int *A; // Deklarasi pointer ke array
    int ukuran_array = 100;

    // Mengalokasikan memori untuk array 1 dimensi dengan ukuran 100 menggunakan malloc
    A = (int *)malloc(ukuran_array * sizeof(int));

    int g = 1;
    
    // Penggunaan array A
    for (int i = 0; i < ukuran_array; i++) {
        A[i] = g * 1; // Contoh pengisian nilai pada array
        g++;
    }

    // Menampilkan nilai yang disimpan dalam array
    printf("Isi array A:\n");
    for (int i = 0; i < ukuran_array; i++) {
        printf("%d ", A[i]);
    }

    // Menggunakan free() untuk melepaskan memori yang dialokasikan
    free(A);

    return 0;
}
