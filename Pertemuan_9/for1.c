//lebih simpel karena 5 kali kerja saja pada bagian state+=2

#include <stdio.h>

int main(int argc, char * argv[]) {
    int state = 0;
    for(state = 0; state<10;state+=2)
        printf("%d\n", state);
    return state;

}
