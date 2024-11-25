#include <stdio.h>
#include <stdlib.h>

void swab (int *x , int * y)
{
*x=*x+*y;
*y=*x-*y;
*x=*x-*y;
}
void swab1(int *x , int * y)
{
*x=*x^*y;
*y=*x^*y;
*x=*x^*y;
}
void swab2(int *x , int * y)
{
*x=*x**y;
*y=*x/(*y);
*x=*x/(*y);
}

int main()
{
    int x=5;
    int y=6;
    swab2(&x,&y);
    printf("%d \t %d",x,y);
    return 0;
}
