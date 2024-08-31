#include <stdio.h> 
#include <stdlib.h>

int main(int argc, char* argv[]) {
    if (argc == 2) {
        printf("Hello, %s!\n", argv[1]);
    }
    else {
        printf("USAGE: %s <name>\n", argv[0]);
        exit(1);
    }
}