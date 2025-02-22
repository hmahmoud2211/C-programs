#include <stdio.h>
#include <string.h>

int main()
{
    char str[200];
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; i < strlen(str); i++)
    {
        if (i != 0 || str[i - 1] != ' ')
        {
            printf("%c", str[i+1]);
        }
    }

    return 0;
}
