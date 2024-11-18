#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#define SIZE 100
int exp(int number , int power){
if (power == 0)
{
return 1;
}else
return number *exp(number,power-1);
}


int main() {
    printf("%d",exp(3,3));
    return 0;
}
