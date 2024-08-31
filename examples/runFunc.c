#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int sayHello() {
    printf("Hello, World!\n");
    return 0;
}

int sayBye() {
    printf("Goodbye, World!\n");
    return 0;
}

int main(int argc, char *argv[]) {
    if (argc == 1) {
        printf("Usage: %s <functionName>\n", argv[0]);
        exit(1);
    }

    if (strcmp(argv[1], "sayHello") == 0) {
        return sayHello();
    } else if (strcmp(argv[1], "sayBye") == 0) {
        return sayBye();
    } else {
        printf("Unknown function: %s\n", argv[1]);
        exit(1);
    }
}