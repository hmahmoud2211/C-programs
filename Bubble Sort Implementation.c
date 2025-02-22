#include <stdio.h>
# define size 6

int main() 
{
    // declare the variables 
    int i;
    int pass;
    int store ;
    int a [size] = {2,6,4,7,1,3};
    // print the original array 
    // make for loop to get every element in the array 
    printf("the origin array element : \n");
    for (i = 0; i < size ; i++ )
    printf("%d",a[i]);
    // make a counting loop
    for ( pass = 1 ; pass < size ; pass++)
    {
        // make a loop to get in evvery elemnt in the array 
        for (i = 0; i < size-1; i++ )
        {
            // make the switch if the number is bigger than the one after 
            if (a[i] > a[i+1])
            {
                store = a[i];
                a[i]=a[i+1];
                a[i+1] = store;
            }
        }


    }
    // print the new array 
    printf("\n the sorted value : \n ");
    for (i = 0; i < size ; i++ )
    printf("%d",a[i]);
}
