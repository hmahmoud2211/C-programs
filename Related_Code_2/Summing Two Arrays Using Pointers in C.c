# include <stdio.h>

int *first_array();
int *second_array();
int sum (int *a1ptr , int *a2ptr , int size1 , int size2);
int main ()
{
   int size1;
   int size2;
   int *a1,*a2;
   printf("Enter the size of the first array : ");
   scanf("%d",&size1);
   printf("Enter the size of the seconed array : ");
   scanf("%d",&size2);
   a1 = first_array(size1); // a1 = arr [0]
   a2 = second_array(size2);// a2 = arr [0]

   printf("%d\n",a1);
   sum ( &a1 , &a2 , size1 , size2 );
    return 0;
}
int *first_array(int size)
{
   
   int element;
   int arr[100];
   
   for (int i = 0 ; i < size ; i++ )
   {
    printf("Enter the numbers of the 1st array : ");
    scanf("%d",&element);
    arr [i] = element ; 
   }
   printf("The first array : ");
   for (int i = 0 ; i < size ; i++ )
   {
    printf("%d ",arr[i]);
   }
   printf ("\n");
   return &arr;
}
int *second_array(int size)
{
   int element;
   int arr[100];
   for (int i = 0 ; i < size ; i++ )
   {
    printf("Enter the numbers of the 2nd array : ");
    scanf("%d",&element);
    arr [i] = element ; 
   }
   printf("The second array : ");
   for (int i = 0 ; i < size ; i++ )
   {
    printf("%d ",arr[i]);
   }
   printf ("\n");
   return  &arr;
}
int sum (int *a1ptr , int *a2ptr , int size1 , int size2)
{ 
    int sum ; 
    int final_arr [100];
    for (int i = 0; i < size1; i++ )
        {
            sum =  *(a1ptr) + *(a2ptr);
            final_arr[i] = sum;
        }
    printf("The sum of 2 arrays : ");
    for (int i = 0; i < size1; i++ )
    {
        printf("%d ",final_arr[i]);
    }
    return 0;
}