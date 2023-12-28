#include <stdio.h>

int main() {
    char name[20] = "Syahrul Gunawan";
    char *p_nama;
    char *pt;
    p_nama = name;
    for(int i = 0; i<20;i++)
        printf("&c", p_nama[i]);
    printf("\n");

    printf("%s", pt);

}