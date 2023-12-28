#include <stdio.h>
#include <stdlib.h>

void tampilkanArray2D(int **array, int baris, int kolom) {
    printf("Isi array 2D:\n");
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int baris, kolom;

    printf("Masukkan jumlah baris: ");
    scanf("%d", &baris);

    printf("Masukkan jumlah kolom: ");
    scanf("%d", &kolom);

    // Alokasi array 2 dimensi secara dinamis
    int **array1 = (int **)malloc(baris * sizeof(int *));
    int **array2 = (int **)malloc(baris * sizeof(int *));
    int **hasil = (int **)malloc(baris * sizeof(int *));

    for (int i = 0; i < baris; i++) {
        array1[i] = (int *)malloc(kolom * sizeof(int));
        array2[i] = (int *)malloc(kolom * sizeof(int));
        hasil[i] = (int *)malloc(kolom * sizeof(int));
    }

    // Memasukkan nilai ke dalam array 1
    printf("Masukkan nilai untuk array 1:\n");
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            printf("Masukkan nilai untuk baris %d kolom %d: ", i + 1, j + 1);
            scanf("%d", &array1[i][j]);
        }
    }

    // Memasukkan nilai ke dalam array 2
    printf("Masukkan nilai untuk array 2:\n");
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            printf("Masukkan nilai untuk baris %d kolom %d: ", i + 1, j + 1);
            scanf("%d", &array2[i][j]);
        }
    }

    // Menampilkan array 1
    printf("\nArray 1:\n");
    tampilkanArray2D(array1, baris, kolom);

    // Menampilkan array 2
    printf("\nArray 2:\n");
    tampilkanArray2D(array2, baris, kolom);

    // Melakukan penjumlahan dua array 2 dimensi
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            hasil[i][j] = array1[i][j] + array2[i][j];
        }
    }

    // Menampilkan hasil penjumlahan array 2 dimensi
    printf("\nHasil Penjumlahan Array 1 dan Array 2:\n");
    tampilkanArray2D(hasil, baris, kolom);

    // Membebaskan memori yang dialokasikan
    for (int i = 0; i < baris; i++) {
        free(array1[i]);
        free(array2[i]);
        free(hasil[i]);
    }
    free(array1);
    free(array2);
    free(hasil);

    return 0;
}

