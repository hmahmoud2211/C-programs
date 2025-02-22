#include <stdio.h>

int main() {
    FILE *fptr;
    char str[100];

    fptr = fopen("myfiletask.txt", "w");

    printf("Enter a string:\n");
    gets(str);
    fprintf(fptr, "%s", str);
    fclose(fptr);

    return 0;
}