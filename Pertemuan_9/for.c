#include <stdio.h>

int main(int argc, char * argv[]) {
    int state = 0;
    for(state = 0; state<10;state++)
        if (state%2 == 0)
            printf("%d\n", state);
    return state;

}