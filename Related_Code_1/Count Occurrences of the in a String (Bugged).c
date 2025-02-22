#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char arr[200];
    char arr_lower [200];
    int counter = 0;
    printf("Enter the string : ");
    fgets(arr, sizeof(arr), stdin);

    for (int i = 0; arr[i] ;i++)
    {
        arr_lower[i] = tolower(arr[i]);
    }

    for (int i = 0; i < strlen(arr_lower); i++)
    {
        if (arr_lower[i] == 't' && arr_lower[i + 1] == 'h' && arr_lower[i + 2] == 'e')
        {
            counter++;
        }
    }

    printf("The word \"the\" repeated %d times", counter);

    return 0;
}
