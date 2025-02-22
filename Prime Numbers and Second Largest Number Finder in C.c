# include <stdio.h>

// program 1
int isPrime(int num)
{

           for (int i =2 ; i < num ;i++)
            {
               if (num % i == 0)
               {
                   return 0 ;
               }
            }
            return 1;

}

int program1() 
{
    
    for (int i = 2; i <= 100; i++) 
    {
        if (isPrime(i)) 
        {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
// program 2
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

int program2() 
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
 int main()
 {
    program1();
    program2();
 }