#include <stdio.h>
#include <stdlib.h>

int main() {
    char c = 'A';
    char *pc;
    char *helper;
    // pc = &c;
    pc = (char *) malloc(26*sizeof(char));
    helper = pc;
    for(int i = 65; i<91;i++){
        *pc = i;
        pc++;
    }
    pc = helper;
    for(pc = helper ; pc< helper+26;pc++){
        printf("&c", *pc);
    }
}