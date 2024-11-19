#include <stdio.h>
#include <stdlib.h>
#define ROW 100
#define COL 100
int main()
{
    int row =0 ;
    int col = 0 ;
    int sumRow[ROW]={0};
    int avgcoul[COL] = {0};
    do{
    printf("enter the ROW size of array");
    scanf("%d" , &row);
    printf("enter the COl size of array");
    scanf("%d" , &col);
    }while (row < 0 || col < 0);
    int arr[ROW][COL] ={0};

    for(int i = 0 ; i < row ; i++)
     {
        for(int j = 0 ; j < col ; j++)
        {
            printf("enter value of arr[%d][%d]",i,j);
            scanf("%d",&arr[i][j]);
        }
     }

     for(int i = 0 ; i < row ; i++)
     {
        for(int j = 0 ; j < col ; j++)
        {
            sumRow[i]+=arr[i][j];
        }
     }

      for(int i = 0 ; i < col ; i++)
     {
        for(int j = 0 ; j < row ; j++)
        {
            avgcoul[i]+=arr[j][i];
        }
         avgcoul[i]/=col;
     }

     for(int i = 0 ; i < row ; i++)
     {
        for(int j = 0 ; j < col ; j++)
        {
            printf("\t%d\t",arr[i][j]);
        }
        printf("\n");
     }
      printf("\n");
      for(int j = 0 ; j < col ; j++)
        {
            printf(" \t%d\t",sumRow[j]);
        }
      printf("\n");
      for(int j = 0 ; j < col ; j++)
        {
            printf("\t%d\t",avgcoul[j]);
        }
    return 0;
}
