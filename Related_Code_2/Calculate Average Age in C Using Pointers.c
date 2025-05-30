#include <stdio.h>
float avg_age(int *ages);
int main ()
{
    int element;
    int arr[5];
    for (int i = 0 ; i < 5 ; i++ )
    {
        printf("Enter the %d ages: ",(i+1));
        scanf("%d",&element);
        arr [i] = element ; 
    }
    printf ("Average age is : %.2f \n",avg_age(& arr[0]));
    return 0;
}
float avg_age(int *ages)
{
    float wallet = 0;
    float average;
        for (int i = 0; i<5 ;i++)
    {
        wallet = wallet + *(ages + i); // *(ages + i) == arr[i]
        if (i == (5 -1))
        {
            average = wallet / 5 ;
        }
    }
    return average;
}