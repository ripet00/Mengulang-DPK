#include <stdio.h>

int main() {
    int baris = 25;
    int kolom = 25;

    // Buat 25 baris 
    char **array = (char**)malloc(sizeof(char*)*baris);

    // setiap baris kemudian dibuatkan array 1 dimensi lagi sebanyak 25
    for(int i = 0; i<25; i++){
        array[i] = (char*)malloc(sizeof(char)*kolom);
    }
     
    for(int i = 0; i < 25; i++ ){
        for(int j = 0; j < 25; j++){
            array[i][j] = i + j;
        }
    }

    printf("");
}