#include <stdio.h>

int find_second_largest(int arr[] , int size)
{
    int max1 = arr [0];
    int max2 = arr [1];
    for (int i = 1 ; i < size ; i++)
    {
        if (arr [i] > max1)
        {
            max2 = max1;
            max1 = arr[i];
        }
    }
return max2 ; 
}

int main() 
{
   int size ;
   int element ;
   int arr[100];

   printf("Enter the size of the array : ");
   scanf("%d",&size);
   for (int i = 0 ; i < size ; i++ )
   {
    printf("Enter the numbers of the array : ");
    scanf("%d",&element);
    arr [i] = element ; 
   }
   printf ("the second maximam number of the array is %d ",find_second_largest(arr, size));
    return 0;
}
