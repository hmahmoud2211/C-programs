# include <stdio.h>
float cube (float num);
int main()
{
    float num2;
    int cast;
    printf("Enter the float number : ");
    scanf("%f",&num2);
    printf ("%.2f: cube is %.2f \n",num2, cube(num2));
    float wallet = cube(num2);
    cast = num2;
    float num1;
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
        printf("sum of cubes is %.2f",wallet);
    }
    return 0;
}
float cube (float num)
{
    return num * num * num ;
}
