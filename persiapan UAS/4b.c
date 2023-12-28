#include <stdio.h>

// Fungsi yang melakukan penambahan 10 pada nilai yang diterima secara reference
void tambahSepuluh(int *nilai) {
    *nilai += 10;
}

int main() {
    int angka = 5;

    printf("Nilai sebelum pemanggilan fungsi: %d\n", angka);

    // Memanggil fungsi tambahSepuluh dengan meneruskan alamat dari variabel angka
    tambahSepuluh(&angka);

    printf("Nilai setelah pemanggilan fungsi: %d\n", angka);

    return 0;
}
