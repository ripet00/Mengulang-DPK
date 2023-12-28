#include <stdio.h>

int array[] = {9,8,7,6,5,4,3,2,2,1,0};

int main(int argc, char * argv[]) {
    printf("element pertama %d\n", array[1]);
    printf("lokasi element pertama array adalah %p\n", array);
    printf("lokasi element kedua array adalah %p\n",&array[1]);
    return 0;
}

// nama array ditambah index adalah pointer