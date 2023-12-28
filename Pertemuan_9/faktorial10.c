#include <stdio.h>

int main(int argc, char * argv[]) {
    int counter;
    int factorial = 1;
    counter = 1;
    while(counter <= 10)
    {
        factorial = factorial * counter;
        counter++;
    }
    printf("%d\n",factorial);
    return counter;

}
