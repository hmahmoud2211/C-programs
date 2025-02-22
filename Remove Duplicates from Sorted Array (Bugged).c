// Online C compiler to run C program online
#include <stdio.h>
void remove(int *arr , int *siz)
{
    int *first = arr;
    int *next = arr+1;
    while (*next < (arr + *siz))
    {
        if(*first != *next)
        {
            *(++first) = *next;
        }
        next++;
    
    }
    
}
int main() {
    int arr[] = {1,1,2,2,2,3,3,3,3,3,4,4,5};
    int size = 13;
    remove(arr,&size);
    return 0;
}