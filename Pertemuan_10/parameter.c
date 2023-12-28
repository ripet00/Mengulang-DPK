#include <stdio.h>
#include <stdlib.h>

int swap(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("Hasil penukaran a = %d b = \n", a ,b);
}

int tukar(int *a, int *b) {
    int temp;
    temp = *a;  //temp adalah nila yang ditunjuk oleh a
    *a = *b;    // alamatnya yang ditukar bukan nilai 
    *b = temp;
}

int main(int argc, char argv[]) {
    if (argc < 2) {
        printf("Paramter program kurang, input dua integer \n");
        return -1;
    }
    int x = atoi(argv[1]);
    int y = atoi(argv[2]);
    swap(x,y);
    tukar(&a, &b);
    printf("x = %d\n",x);
    printf("y = %d\n",y);
}

// pass by value  = 
// pass by reference
// variabel lookal & global ?? lokal = dalam main       global = diluar main