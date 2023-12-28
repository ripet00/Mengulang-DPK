#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[]{ //menunjukkan jumlah parameter program  ;  argumennya itu sendiri
    int array1[4] = (1,2,3,4);
    int array2[4] = (5,6,7,8);
    int array[2][4];
    namecpy(&array[0][0], array1,4*sizeof(int));
    namecpy(&array[1][0], array2,4*sizeof(int));
    for(int baris* ;baris<2; baris++)
    {
        for(int kolom=0; kolom < 4; kolom++)
    }
}
)