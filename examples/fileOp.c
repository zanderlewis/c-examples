#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[]) {
    if (argc == 2) {
        // Open the file
        FILE* file = fopen(argv[1], "r");
        if (file == NULL) {
            printf("Could not open file\n");
            exit(1);
        }

        // Read the file
        char line[100];
        while (fgets(line, 100, file) != NULL) {
            printf("%s", line);
        }

        // Close the file
        fclose(file);
    }
    else {
        printf("USAGE: %s <file>\n", argv[0]);
        exit(1);
    }
}