#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>
#include <curses.h>


#include <stdio.h>


int main() {
     int sum =0;
    do{
    int amount=0;
    scanf("%d" , &amount);
    sum+=amount;
    }while(sum<100);
    return 0;
}
