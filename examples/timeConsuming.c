#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    for (i = 0; i < 1000000; i++) {
        printf("\rProcessing... %d", i);
    }
}