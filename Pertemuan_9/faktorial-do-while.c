#include <stdio.h>

int main(int argc, char * argv[]) {
    int counter;
    int factorial = 1;
    counter = 10;
    do
    {
        factorial = factorial * counter;
        counter--;
    }  while(counter < 0);

    printf("%d\n",factorial);
    return counter;

}
