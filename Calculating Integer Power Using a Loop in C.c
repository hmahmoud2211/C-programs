# include <stdio.h>

int integerPower(int base,int  exponent);
int main ()
{
    int base;
    int exponent;
    printf("Enter the base : ");
    scanf ("%d",&base);
    printf("Enter the exponent : ");
    scanf ("%d",&exponent);
    integerPower(base,exponent);
    return 0;
}
int integerPower(int base, int exponent)
{
    int wallet = 1;
    for  (int i = 0 ;i < exponent ; i++ )
    {
        wallet = wallet * base ;
    }
    printf("%d",wallet);
    return 0;
}