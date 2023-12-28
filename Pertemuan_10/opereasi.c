#include <stdio.h>
#include <stdlib.h>

int jumlah(int a, int b){
    return a + b;
}

int kali(int a, int b){
    return a * b;
}

float bagi(inta, int b){
    return a/b;
}

int main(int argc, char *argv[]) {
    int hasil1;
    int hasil2;
    float hasil3;
    if (argc <2) {
        printf("Paramter program kurang, input 2 bilangan bulat ! \n");
        return -1;
    }
    int a = atoi(argv [1]);
    int b = atoi(argv [2]);
    hasil1 = tambah(a,b);
    hasil2 = tambah(a,b);
    printf("Hasil1 = %d\n", hasil1);
    printf("Hasil2 = %d\n", hasil2);
    return 0;
}

float bagi(int a, int b){
    return a/b;
}