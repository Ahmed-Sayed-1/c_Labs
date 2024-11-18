#include <stdio.h>
#include <stdlib.h>
#define SIZE 100

int main()
{
    printf("enter the size of array");
    int length =0;
    scanf("%d" , &length);
    int arr[SIZE] = {0};
    for(int i = 0 ; i < length ; i++)
     {
     printf("enter elment  %d  ",i+1);
     scanf("%d", &arr[i]);
     }
    int min =arr[1];
    int max = arr[1];
    for(int i = 0 ; i < length ; i++)
    {
    if (arr[i] < min)
    min= arr[i];
    if (arr[i] > max)
    max = arr[i];
    }
    printf("min = %d , max = %d",min , max);

}
