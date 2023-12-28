//Matriks 2x2 dengan cara menginputkan nilai
#include <stdio.h>

float a[2][2];


int main() {
  for(int i = 0; i <2; i++){
    for(int j = 0; j <2; j++){
       printf("Input a[%d][%d] = ", i,j);
       scanf("%f",&a[i][j]);
    }
  }
printf("Berikut matriks 2x2 : \n");
  for(int i = 0; i < 2; i++){
    for(int j = 0; j< 2; j++){
      printf("%.1f  ",a[i][j]);
    }
    printf("\n");
  }
   
 
  return 0;
}
