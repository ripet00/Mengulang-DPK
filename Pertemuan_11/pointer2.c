#include <stdio.h>

int array[] = {9,8,7,6,5,4,3,2,2,1,0};

int main(int argc, char * argv[]) {
    int *p;     // variabek yg berisi alamat suatu lokasi data
    printf("element pertama %d\n", array[1]);
    printf("lokasi element pertama array adalah %p\n", array);
    p = &array[0];      // sama saja dgn n = array
    printf("alamat elemen index 0 = %p\n",p);
    return 0;
}

// elemen pada baris yang sama memiliki alokasi memori yang berdekatan