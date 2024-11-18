#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[8] = {5,6,7,8,9,10,11,12};
    int min =arr[1];
    int max = arr[1];
    for(int i = 0 ; i < 8 ; i++)
    {
    if (arr[i] < min)
    min= arr[i];
    if (arr[i] > max)
    max = arr[i];
    }
    printf("min = %d , max = %d",min , max);

}
