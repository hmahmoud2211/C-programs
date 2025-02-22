#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char *filepath;
    char ch;
    int counter = 0;
    filepath = "C:\\Users\\user\\assignment 2\\hazem.txt";
    file = fopen( filepath , "r");

    if (file == NULL) {
        printf("Error opening file.\n");
        exit(1);
    }

    while ((ch = fgetc(file)) != EOF) {
        if (ch == ' ' || ch == '\n' || ch == ".") {
            counter++;
        }
    }

    fclose(file);

    printf("Number of words in this file : %d\n", counter);

    return 0;
}
