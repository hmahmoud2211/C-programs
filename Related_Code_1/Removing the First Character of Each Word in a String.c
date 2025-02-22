#include <stdio.h>
#include <string.h>

int main()
{
    char arr[200];
    printf("Enter the string : ");
    fgets(arr, sizeof(arr), stdin);

    for (int i = 0; i < strlen(arr); i++)
    {
        if (i == 0 || arr[i - 1] == ' ')
        {
            continue;
        }
        else
        {
            printf("%c", arr[i]);
        }
    }

    return 0;
}
