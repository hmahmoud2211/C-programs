#include <stdio.h>
// protyping for program 1
int program_1();
int isPrime(int x);
// protyping for program 2
int program_2();
int  find_second_largest(int arr[], int size);
// protyping for program 3
int program_3 ();
int first_array();
int second_array();
int sum (int *a1ptr , int *a2ptr , int size1 , int size2);
// protyping for program 4
int program_4();
int integerPower(int base,int exponent);
// protyping for program 5
int program_5();
float cube (float num);
// protyping for program 6
int program_6 ();
float avg_age(int *ages);
// protyping for program 7
int program_7 ();
void minMax(int a[], int len, int *min, int *max);

// main function
int main ()
{
    program_1();
    program_2();
    program_3();
    program_4();
    program_5();
    program_6();
    program_7();
    return 0;
}


// program 1
int program_1() 
{
    
    for (int i = 2; i <= 100; i++) 
    {
        if (isPrime(i)) 
        {
            printf("%d ", i);
        }
    }
    return 0;
}

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

// program 2
int program_2() 
{
    printf("program 2\n");
    printf ("it finds the second largest element in an integer array\n");
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
   printf ("the second maximam number of the array is %d \n",find_second_largest(arr, size));
    return 0;
}
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

// program 3 
int program_3 ()
{
    printf("program 3\n");
    printf("it sums the values of two arrays in one array\n");
   int size1 ;
   int size2;
   int a1,a2;
   printf("Enter the size of the first array : ");
   scanf("%d",&size1);
   printf("Enter the size of the seconed array : ");
   scanf("%d",&size2);
   a1 = first_array(size1);
   a2 = second_array(size2);
   sum ( &a1 , &a2 , size1 , size2 );
    return 0;
}
int first_array(int size)
{
   
   int element ;
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
   return arr[0];
}
int second_array(int size)
{
   int element ;
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
   return  arr[0];
}
int sum (int *a1ptr , int *a2ptr , int size1 , int size2)
{ 
    int sum  ; 
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
    printf("\n");
    return 0;
}

// program 4
int program_4 ()
{
    printf("program 4\n");
    printf("it returns the value of base exponent\n");
    int base;
    int exponent;
    printf("Enter the base : ");
    scanf ("%d",&base);
    printf("Enter the exponent : ");
    scanf ("%d",&exponent);
    integerPower(base,exponent);
    return 0;
}
int integerPower(int base,int exponent)
{
    int power;
    int wallet = 1;
    for  (int i = 0 ;i < exponent;i++)
    {
        power = base ;
        wallet = wallet * power ;
    }
    printf("%d^%d = %d\n",base,exponent,wallet);
}

// program 5
int program_5()
{
    printf("program 5\n");
    printf ("takes float numbers from user and computes and prints the cube of each number until the user enters zero it stops, and it prints the sum of all the cubes computed before\n");
    float num1;
    float num2;
    int cast;
    printf("Enter the float number : ");
    scanf("%f",&num2);
    float wallet = cube (num2);
    cast = num2;
    printf ("%.2f: cube is %.2f \n",num2, cube(num2));
    while (cast != 0)
    {
        printf("Enter the float number : ");
        scanf("%f",&num1);
        cast = num1;
        if (cast != 0 )
        {
            printf ("%.2f : cube is %.2f \n", num1 , cube(num1));
        }
        else 
        printf("0\n");
        wallet = wallet + cube (num1) ;
        if (cast == 0)
        printf("sum of cubes is %.2f \n",wallet);
    }
    return 0;
}
float cube (float num)
{
    return num * num * num ;
}

// program 6
# define size6 (5)
int program_6 ()
{
    printf("program 6\n");
    printf ("it takes 5 ages from user and get the averge between them\n");
    int element;
    int arr[size6];
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
        for (int i = 0; i<size6 ;i++)
    {
        wallet = wallet + *(ages + i);
        if (i == (size6 -1))
        {
            average = wallet / size6 ;
        }
    }
    return average;
}
// program 7
int program_7 ()
{
    printf("program 7\n");
    printf("it finds the minimum and maximum of an array\n");
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
