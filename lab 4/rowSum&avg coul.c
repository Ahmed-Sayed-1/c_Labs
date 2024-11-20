#include <stdio.h>
#include <stdlib.h>
#define ROW 100
#define COL 100

int GitInt() {
    int number;
    int flage =1;
    char check;

    while (flage) {
        printf("Enter an integer: ");
        if (scanf("%d%c", &number, &check) == 2 && check == '\n') {         //5g -> 5 %d g %c
            printf("You entered the number: %d\n", number);
            flage=0;

        } else {
            printf("Invalid input! Please enter an integer.\n");

            while (getchar() != '\n');
        }
    }

    return number;
}
int main()
{
    int row =0 ;
    int col = 0 ;
    int sumRow[ROW]={0};
    int avgcoul[COL] = {0};
    do{
    printf("enter the ROW size of array");
    row = GitInt();
    printf("enter the COl size of array");
    col = GitInt();
    }while (row < 0 || col < 0);
    int arr[ROW][COL] ={0};
//-------------------------------------------------------------------------------
// git user values
//-------------------------------------------------------------------------------
    for(int i = 0 ; i < row ; i++)
     {
        for(int j = 0 ; j < col ; j++)
        {
            printf("enter value of arr[%d][%d]",i,j);
            arr[i][j]=GitInt();
        }
     }
//-------------------------------------------------------------------------------
// calc row sum
//-------------------------------------------------------------------------------
     for(int i = 0 ; i < row ; i++)
     {
        for(int j = 0 ; j < col ; j++)
        {
            sumRow[i]+=arr[i][j];
        }
     }
//-------------------------------------------------------------------------------
// calc avg coul
//-------------------------------------------------------------------------------
      for(int i = 0 ; i < col ; i++)
     {
        for(int j = 0 ; j < row ; j++)
        {
            avgcoul[i]+=arr[j][i];
        }
         avgcoul[i]/=row;
     }
//-------------------------------------------------------------------------------
// print array
//-------------------------------------------------------------------------------
     for(int i = 0 ; i < row ; i++)
     {
        for(int j = 0 ; j < col ; j++)
        {
            printf("\t%d\t",arr[i][j]);
        }
        printf("\n");
     }
      printf("\n");

//-------------------------------------------------------------------------------
// print sum of each row
//-------------------------------------------------------------------------------
      for(int j = 0 ; j < row ; j++)
        {
            printf(" \t%d\t",sumRow[j]);
        }
      printf("\n");
//-------------------------------------------------------------------------------
// print  avg of each coul
//-------------------------------------------------------------------------------
      for(int j = 0 ; j < col ; j++)
        {
            printf("\t%d\t",avgcoul[j]);
        }
    return 0;
}
