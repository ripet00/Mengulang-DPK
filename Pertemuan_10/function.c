#include <stdio.h>

int main(int argc, char *argv[]) {
    if (argc <2)    //argc adalah berapa paremeter yang kita berikan pada fungsi main
    {
        printf (" paramater program kurang, ketikan nama anda : ");
        return 0;
    }
    printf("ini program %s \n", argv[0]);   // argv0 akan menerima parameter pertama
    printf("Hello %s \n", argv[1]);
}
