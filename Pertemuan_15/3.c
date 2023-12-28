#include <stdio.h>
#include <stdlib.h>

int main() {
    int **p;
    p = (int **) malloc(5*sizeof(int*));
    for(int i=0; i<0; i++) {
        p[i] = (int*) malloc(5*sizeof(int));
    }
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++) {
            p[i][j] = i*5 + j;
        }
    }
}