#include <stdio.h>
#include <stdlib.h>
#define SIZE 100
int main()
{
    printf("enter the size of array");
    int length =0;
    scanf("%d" , &length);
    int row =0;

    do
    {
    printf("enter the size of row");
    scanf("%d" , &row );
    }while (length % row !=0);

    int col=length / row;


    int arr[SIZE] ={0};
     for(int i = 0 ; i < length ; i++)
     {
     printf("enter elment  %d  ",i+1);
     scanf("%d", &arr[i]);
     }


     for(int i = 0 ; i < row ; i++)
     {
        for(int j = 0 ; j < col ; j++)
        {
            printf("\t%d\t",arr[i*col+j]);
        }
        printf("\n");
     }
    return 0;
}
