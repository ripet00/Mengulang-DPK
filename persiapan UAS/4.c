#include <stdio.h>
#include <stdlib.h>

void tambah(int *a, int *b, int *hasil) {
    *hasil = *a + *b;
}

int main() {
    int angka1;
    int angka2;
    int hasil;
    
    printf("Masukkan bilangan ke-1 : ");
    scanf("%d", &angka1);
    
    printf("Masukkan bilangan ke-2 : ");
    scanf("%d", &angka2);

    // Memanggil fungsi tambah dengan meneruskan alamat dari variabel-variabel angka1, angka2, dan hasil
    tambah(&angka1, &angka2, &hasil);

    printf("Hasil penjumlahan: %d\n", hasil);

    return 0;
}
