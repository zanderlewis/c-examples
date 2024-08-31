#include <stdio.h>

int main() {
    // Get the number of Fibonacci numbers to generate
    int num;
    printf("How many Fibonacci numbers would you like to generate? ");
    scanf("%d", &num);

    // Generate the sequence
    int a = 0;
    int b = 1;
    for (int i = 0; i < num; i++) {
        printf("%d\n", a);
        int temp = a;
        a = b;
        b = temp + b;
    }

    return 0;
}