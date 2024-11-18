#include <stdio.h>
#include <stdlib.h>

int main()
{

    int x = 10;
    char y = 'b';
    float z = 15.5;
    printf("value of x = %d \n " , x);
    printf("value of  y= %c \n " , y);
    printf("value of z = %.3f \n " , z);
    //-------------------------------------------------------------------------------------------
    char m ;
    printf("enter value of char \n");
    scanf("%c" , &m);
    printf("value of cahr = %d  for ASCII \n " , m);

    //--------------------------------------------------------------------------------------------
    int value = 20 ;
    printf("value in hexadwcimal= %X \n ", value);
    printf("value in octal= %o \n ", value);

    return 0;
}
