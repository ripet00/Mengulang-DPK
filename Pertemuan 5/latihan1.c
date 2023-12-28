#include<stdio.h>

int main() {
    char name[30];

    printf("Hi, please enter your name: ");
    scanf("%c",&name);
    printf("Hi, %c", name);
    printf("Hi my name is %s",name);

    return 0;
}