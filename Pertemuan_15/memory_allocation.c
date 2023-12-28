#include <stdio.h>
#include <stdlib.h>

int main() {
    char c = 'A';
    char *pc;
    // pc = &c;
    pc = (char *) malloc(26);
    printf("%c\n%d", *pc);
}