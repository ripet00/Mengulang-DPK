#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {
    int a;
    int b;
    if (argc < 2)
    {
        printf("Parameter program kurang, input dua integer ! \n");
        return 0;
    }
    a = atoi(argv[1]);
    b = atoi(argv[2]);
    printf("%d + %d = %d\n", a,b,a+b);
}