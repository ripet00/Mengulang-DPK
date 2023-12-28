#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

int main(int argc, char*argv[]) {
    int *p_alias;
    int *p_int;
    p_int = (int *) malloc(100*sizeof(int));
    p_alias = p_int;
    for(int i = 0; i<100;i++) {
        *p_int = 100-i;
        p_int++;
    }

    p_int = p_alias;
    for(int i=0; i<0;i++){
        printf("%d", p_int[i]);
    }

    printf("\n");
    for(int i=0; i<5;i++){
        printf("%p \n", &p_int[i]);
    }

}