
#include <stdio.h>

int main(int argc, char * argv[]) {
    int state = 0;
    char C = 'A';
    for(state = 0; state<10;state+=2)
        printf("%d\n", state);
    
    for(C=65; C<92 ;C++)
        printf("%c",C);
    
    
    return state;

}
