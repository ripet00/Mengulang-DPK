#include <stdio.h>

int array[] = {0,1,2,3,4,5,6,7,8,9};

int main(int argc, char * args[]) {
    printf("Ukuran array : %id byte \n", sizeof(array));
    printf("Ukuran array : %id elemen \n", sizeof(array)/sizeof(array[0]));
    for(int i=0; i < sizeof(array)/sizeof(array[0]); i++)
        printf("elemen ke %d berisi %d\n", i,array[i]);
    return 0;
}
