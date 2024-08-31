#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc == 1) {
        printf("Usage: %s <string>\n", argv[0]);
        return 1;
    }

    // Combine all arguments into a single string
    char input[1000] = "";
    for (int i = 1; i < argc; i++) {
        strcat(input, argv[i]);
        if (i < argc - 1) {
            strcat(input, " ");
        }
    }

    // Reverse the string
    int len = strlen(input);
    for (int i = 0; i < len / 2; i++) {
        char temp = input[i];
        input[i] = input[len - i - 1];
        input[len - i - 1] = temp;
    }

    printf("%s\n", input);
    exit(0);
}