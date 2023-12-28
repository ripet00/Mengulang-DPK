#include <stdio.h>
#include <stdlib.h>

int main() {
    int baris = 25;
    int kolom = 25;

    // Buat 25 baris 
    int **array = (int**)malloc(sizeof(int*)*baris);

    // setiap baris kemudian dibuatkan array 1 dimensi lagi sebanyak 25
    for(int i = 0; i<25; i++){
        array[i] = (int*)malloc(sizeof(int)*kolom);
    }
     
    for(int i = 0; i < 25; i++ ){
        for(int j = 0; j < 25; j++){
            array[i][j] = i + j;
        }
    }
    printf("array 2 dimensi : \n");
        for(int i = 0; i < 25; i++ ){
            for(int j = 0; j < 25; j++){
                printf("%d  ", array[i][j]);
        }
        printf("\n");
    }

    return 0;
}