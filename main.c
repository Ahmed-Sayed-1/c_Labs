#include <stdio.h>


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

    }



    return 0;
}

