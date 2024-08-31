#include <stdio.h>

int main() {
    // Get the name from the user
    char name[100];
    printf("What is your name? ");
    scanf("%s", name);

    // Print the greeting
    printf("Hello, %s!\n", name);
}