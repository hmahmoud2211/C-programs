# include <stdio.h>

int main ()
{
    int x;
    int y;
    int z;
    int l;
    for (x=1;x<=7;x++)
    {
        printf("%d",x);
        if (x<7)
        {
        printf (",");
        }
    }
    printf("\n");

    
    for (y=3;y<=23;y=y+5){
        printf("%d",y);
        if (y<23)
        {
        printf (",");
        }
    }
    printf("\n");



    for (z=20;z>=-10;z-=6){
        printf("%d",z);
        if (z>-10)
        {
        printf (",");
        }
    }
    printf("\n");



    for (l=19;l<=51;l+=8){
        printf("%d",l);
        if (l<51)
        {
        printf (",");
        }
    }
    return 0;
}