//dibalik dari elemen paling terakhir ke elemen paling awal

#include <stdio.h>

int array[] = {0,1,2,3,4,5,6,7,8,9};

int main(int argc , char * args[]) { // parameter program, parameter itu sendiri
    printf("Ukuran array : %id byte \n", sizeof(array));
    printf("Ukuran array : %id elemen \n", sizeof(array)/sizeof(array[0]));
    for(int i= sizeof(array)/sizeof(array[0])-1;i>=0; i--)
        printf("elemen ke %d berisi %d\n", i,array[i]);
    return 0;
}

// args (0) adalah  nama program
// char * args()
// args adalah pointer yang menunujuk ke array of char