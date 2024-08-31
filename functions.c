#include <stdio.h>
#include <stdlib.h>

int add3(int x, int y, int z) {
    return x+y+z;
}

int divide(int x, int y) {
    if (y == 0) {
        printf("[ERROR] Division by zero detected! Please try again.\n");
        exit(1);
    }
    return x/y;
}

int main() {
    int a = 5;
    int b = 10;
    int c = 15;
    printf("The sum of %d, %d, and %d is %d\n", a, b, c, add3(a, b, c));
    printf("The result of %d divided by %d is %d\n", a, b, divide(a, b));
    printf("The result of %d divided by %d is %d\n", a, 0, divide(a, 0));
    return 0;
}