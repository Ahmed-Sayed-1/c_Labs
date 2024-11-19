# include <stdio.h>
#include "conio.h"
#define UP 65
#define DOWN 66
#define SET_WHITE printf("\033[0m")
#define SET_RED printf("\033[1;31m")
#define EXTENDED 27
#define BACK 127
#define ENTER 10
void choiceOne(){
        SET_RED;
        printf("\033[%d;%dH", 2, 10);
        printf("New \n");
        SET_WHITE;
        printf("\033[%d;%dH", 4, 10);
        printf("Display \n");
        printf("\033[%d;%dH", 6, 10);
        printf("Exit \n");
        }
void choiceTwo(){
        SET_WHITE;
        printf("\033[%d;%dH", 2, 10);
        printf("New \n");
        SET_RED;
        printf("\033[%d;%dH", 4, 10);
        printf("Display \n");
        SET_WHITE;
        printf("\033[%d;%dH", 6, 10);
        printf("Exit \n");
        }
void choiceThree(){
        SET_WHITE;
        printf("\033[%d;%dH", 2, 10);
        printf("New \n");
        printf("\033[%d;%dH", 4, 10);
        printf("Display \n");
        SET_RED;
        printf("\033[%d;%dH", 6, 10);
        printf("Exit \n");
        SET_WHITE;

}
void main(){
choiceOne();
char flag=1;
char choice;

choice=getch();
if(choice==EXTENDED){
    choice=getch();
    printf("%d",choice);
  }
while(1){
choice=getch();
if(choice==EXTENDED){
    choice=getch();
  }
clrscr();
switch(choice){
case UP:
flag--;

    if(flag == 1)
    {
    choiceOne();
    }else if(flag == 2)
    {
    choiceTwo();
    }else if(flag == 0)
    {
    choiceThree();
    flag=3;
    }
    break;

case DOWN:
flag++;
    if(flag == 4)
    {
    choiceOne();
    flag =1;
    }else if(flag == 2)
    {
    choiceTwo();
    }else if(flag == 3)
    {
    choiceThree();
    flag=3;
    }

break;

case ENTER:
    if(flag == 1)
    {
    clrscr();
    printf("New");
    }else if(flag == 2)
    {
    clrscr();
    printf("Display");
    }else if(flag == 3)
    {
    clrscr();
    printf("Exit");
    }


break;

case BACK:
if(flag == 1)
    {
    clrscr();
    choiceOne();
    }else if(flag == 2)
    {
    clrscr();
    choiceTwo();
    }else if(flag == 3)
    {
    clrscr();
    choiceThree();
    }
break;
default:
printf("Invalid Input");
break;



}
}
}

