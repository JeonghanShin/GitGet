// testbranch
#include <stdio.h>
#include "myheader.h"

int main(void) {
    char name[17] = {0,};

    printf("Name: ");
    printf("%s\n", name);

    printHello();
    printBye();
    
    printf("test editing\n");

    return 0;
}
