#include <stdio.h>
#include <stdlib.h>

// program 1
int isPrime(int num);
int program_1()
{
    for (int i = 2; i <= 100; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}

int isPrime(int num)
{
    for (int i = 2; i <= (num / 2); i++)
    {
        if ( num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
// Programme 2
int find_second_largest(int a[] , int size);

int progr_2()
{
   int len , num ,arr[100];
   printf("the size of the array : ");
   scanf("%d",&len);
   for (int i = 0 ; i < len ; i++ )
   {
    printf("the numbers of the array : ");
    scanf("%d",&num);
    arr [i] = num ;
   }
   printf ("the second maximam number of the array is %d \n",find_second_largest(arr, len));
    return 0;
}
int find_second_largest(int a[] , int size)
{
    int max1 = a [0],max2 = a [1];
    for (int i = 1 ; i < size ; i++)
    {
        if (a [i] > max1)
        {
            max2 = max1;
            max1 = a [i];
        }
     }
return max2 ;
}

 // Programme 3

int sumArrays(int arr[], int arr1[], int sum[], int size) {
    for (int i = 0; i < size; i++)
 {
        sum[i] = arr[i] + arr1[i];
    }
    
}

int program3() {
    int arr1[] = {1,2,3,4,5,6,7,8};
    int arr2[] = {8,7,6,5,4,3,2,1};
    int size = sizeof(arr1) / sizeof(int);
    int sum[size];

    sumArrays(arr1, arr2, sum, size);

    printf("Sum array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", sum[i]);
    }
    printf("\n");
    return 0;
}

// Programme 4
int integerPower(int base,int expon);
int program_4 ()
{
    int a,ex;
    printf("Enter the base : ");
    scanf ("%d",&a);
    printf("Enter the exponent : ");
    scanf ("%d",&ex);
    integerPower(a,ex);
    return 0;
}
int integerPower(int base,int expon)
{
    int power = 1;
    for  (int i = 0 ;i < expon;i++)
    {
        power = power * base ;
    }
    printf("%d^%d = %d\n",base,expon,power);
}


// Programme 5

float cube (float x);

int program_5()
{
    float  num1 , num2 , cast;
    printf("Enter the float number : ");
    scanf("%f",&num2);
    float save = cube (num2);
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
        save = save + cube (num1) ;
        if (cast == 0)
        printf("sum of cubes is %.2f \n",save);
    }
    return 0;
}
float cube (float x)
{
    return x * x * x;
}

// Programme 6
double Average_age(int *ages);
int programe6() {
    int x;
    int ages[5];
    int i;
    double average;

    printf("Enter the five ages: ");
    for (i = 0; i < 5; i++) {
        scanf("%d", &x);
        ages[i]=x;
    }

    average = Average_age(ages);

    printf("Average age is: %.2lf\n", average);

    return 0;
}

double Average_age(int *ages) {
    int i;
    double sum = 0;

    for (i = 0; i < 5; i++) {
        sum += ages[i];
    }

    return sum / 5;
}

// Programme 7

void minMax(int a[], int len, int *min, int *max);

int Programme_7() {
    int a[] = {20, 10, 5, 30, 17};
    int len = sizeof(a) / sizeof(a[0]);
    int min, max;
    minMax(a, len, &min, &max);
    printf("Minimum value in the array is: %d\n", min);
    printf("Maximum value in the array is: %d\n", max);
    return 0;
}

void minMax(int a[], int len, int *min, int *max) {
    int i;
    *min = a[0];
    *max = a[0];
    for (i = 1; i < len; i++) {
        if (a[i] < *min) {
            *min = a[i];
        }
    }
}
int main ()
{
    program_1();
    progr_2();
    program3();
    program_4 ();
    program_5();
    programe6();
    Programme_7();
}






