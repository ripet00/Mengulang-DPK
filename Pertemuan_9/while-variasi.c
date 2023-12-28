#include <stdio.h>

int main(int argc, char * argv[]) {
    int counter;
    counter = 0;
    while(counter < 10)
    {
        printf("%d\n",++counter);
    }
        
    return counter;

}