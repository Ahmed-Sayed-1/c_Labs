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
    if (size <0) {
        printf("postive odd numbers valid \n");
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
        fflush(stdout);
        sleep(1);
    }
    }

  /*  while (i <= n * n) {

        printf("\033[%d;%dH", row+1, (col*4)+1);
        printf("%d",i);

        int newRow = row - 1;
        int newCol = col + 1;

        if (newRow < 0) newRow = n - 1;
        if (newCol >= n) newCol = 0;

        if (i % n == 0) {
            newRow = row + 1;
            newCol = col;
        }

        row = newRow;
        col = newCol;

        i++;
        fflush(stdout);
        sleep(1);
    }
*/

 //   return 0;
//}
/*
#include <stdio.h>
//#include<windows.h>
#include<unistd.h>

int main() {
    int size;

    printf("Enter size of square: ");

    scanf("%d", &size);

    if (size % 2 == 0) {
        printf("Only odd numbers are valid \n");
        return 0;
    }

    int num = 1;
    int row = 0, col = size / 2;

    for( ;num <= size * size; num ++)
    {
    printf("\033[%d;%dH", row  + 2, col * 4 + 3);

        printf("%d ", num);


         row -= 1;
         col += 1;


        if (num % size == 0) {
            row += 2;

        }

        if (row < 0)
            row= size - 1;
        if (col >= size)
            col = 0;
            fflush(stdout);
            sleep(1);

    }



    return 0;
}


*/
