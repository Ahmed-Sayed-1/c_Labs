#include <stdio.h>
#include<unistd.h>


int main() {
    int size;

    printf("Enter the sizeof the square: ");
    scanf("%d", &size);

    if (size % 2 == 0) {
        printf("Only odd numbers valid \n");
        return 0;
    }

    int i = 1;
    int row = 0, col = size / 2;
    for(i;i<=size*size;i++)
    {
     printf("\033[%d;%dH", row+2, (col*4)+1);
        printf("%d",i);

        int newRow = row - 1;
        int newCol = col + 1;

        if (newRow < 0) newRow = size- 1;
        if (newCol >= size) newCol = 0;

        if (i % size== 0) {
            newRow = row + 1;
            newCol = col;
        }

        row = newRow;
        col = newCol;
       
    }


    return 0;
}
