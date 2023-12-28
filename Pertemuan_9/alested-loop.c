#include <stdio.h>

int main() {
    int count = 1;

    for(count=1; count<=5;count++) {
        for(int count2=1; count2<=count;count2++)
             printf("%d", count2);
            printf("\n");
    }
    return count;
}