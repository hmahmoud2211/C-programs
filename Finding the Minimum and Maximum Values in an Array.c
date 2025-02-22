#include <stdio.h>

void minMax(int a[], int len, int *min, int *max);
int main ()
{
    int size;
    int element;
    int max , min ;
    printf("Enter the size of the array : ");
    scanf("%d",&size);
    int arr [size];
    for (int i = 0; i < size ; i++)
    {
        printf("Enter number %d : ",(i+1));
        scanf("%d",&element);
        arr[i] = element; 
    }
    minMax( arr , size , &min, &max);
    printf("The maximam number in the array : %d\n",max);
    printf("The manimam number in the array : %d", min);
    return 0;
}

void minMax(int a[], int len, int *minptr, int *maxptr) 
{
    *minptr = a[0];
    *maxptr = a[0];
    for (int i = 1; i < len; i++) 
    {
        if (a[i] < *minptr) 
        {
            *minptr = a[i];
        }
        if (a[i] > *maxptr)
        {
            *maxptr = a[i];
        }
    }  
}
