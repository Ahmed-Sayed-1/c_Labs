# include <stdio.h>
#include "conio.h"
#define UP 65
#define DOWN 66
#define SET_WHITE printf("\033[0m")
#define SET_RED printf("\033[1;44m")
#define EXTENDED 27
#define BACK 127
#define ENTER 10
#define SIZE 100
#define Row 4
#define Col 10
#define HOME 72
#define END 70
#define RIGHT 67
#define LEFT 68
#define F1 80
typedef struct Emp
{
char name[20];
int id;
int salary;
}EMP;
int check_in (EMP e[] , int num)
{
    int size=0;
    while(e[size].id!=0 && e[size].salary!=0)
    {
    if (e[size].id == num){
    return 0;
    }
    size++;
    }
    return 1 ;
}
void choices(int flag)
{
    clrscr();
    printf("%d\n",flag);
    char str[Row][Col]={"New","Display","Modify","Exit"};
    for (int i=0;i<Row;i++)
    {
        if(flag==i)
        {
        SET_RED;
        printf("%s\n", str[i]);
        SET_WHITE;
        }else
        {
        printf("%s\n", str[i]);
        }
    }
    printf("\n\n\nfor documantion press Insert");
}
void print_emp(EMP e[])
{
    int i=0;
    while(e[i].id!=0 && e[i].salary)
    {
    printf("employee name : %s\n",e[i].name);
    printf("employees id : %d\n ", e[i].id);
    printf("employees salary : %d\n " , e[i].salary);
    printf("-----------------------------------------\n");
    i++;
    }
}
int isValidString(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        if (!((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') || ch == ' ')) {
            return 0;
        }
    }
    return 1;
}
void print_id(EMP e[],int flag)
{
    int i=0;
    while(e[i].id!=0 && e[i].salary)
    {
    //printf("employee name : %s\n",e[i].name);
    if(i==flag){
    SET_RED;
    printf("employees id : %d \n", e[i].id);
    SET_WHITE;
    }else
    {
    printf("employees id : %d\n ", e[i].id);
    }
    //printf("employees salary : %d\n " , e[i].salary);
    //printf("-----------------------------------------\n");
    i++;
    }

}
int length(EMP e[])
{
    int i=0;
    while(e[i].id!=0 && e[i].salary)
    {
    i++;
    }
    return i;
}
int modi (EMP e[])
{
int len=length(e);
    int flag =0;
    print_id(e,flag);
while(1){
    char choice=getch();
  if(choice==EXTENDED)
    {
    choice=getch();
    }
clrscr();
switch(choice){
case RIGHT:
case UP:
flag--;
if(flag == -1)
    {
    flag=length(e)-1;
    }
    print_id(e,flag);

    break;
case LEFT:
case DOWN:
flag++;
if(flag == length(e))
    {
    flag=0;
   // choices(flag);

    }
   print_id(e,flag);


break;

case ENTER:
    int f = 0;
    while(!(f==1||f==2)){
    printf("press 1 to modify name 2 to modify salary ");
    scanf("%d",&f);

    }
    printf("%d",f);
    if (f=1){
    printf("new name : ");
    scanf(" %[^\n]",e[flag].name);
    }else if(f==2)
    {
    printf("new salary : ");
    scanf(" %d",e[flag].salary);
    }

   if(getch()==ENTER)
    print_emp(e);


break;
case F1:
    clrscr();
    printf("only avlible buttons \n");
    printf("arrows and to go up or down\n");
    printf("ENTER to go to specific  button\n");
    printf("BACKSPACE to go back \n");
    printf("home to go to mune \n");
    printf("End to go to exit choice \n");
    printf("new choice is for adding new employee \n");
    printf("Display choice for display employee in the system \n");
    printf("modfie is for edite date foe specific employee \n");
    printf("exitfor exit th program \n");


break;

case BACK:
return;
break;
default:
printf("Invalid Input");
break;



}
}
return flag;
}
int GitInt()
{
    int number;
    int flage =1;
    char check;

    while (flage) {
        //printf("Enter an integer: ");
        if (scanf("%d%c", &number, &check) == 2 && check == '\n' && number>0) {         //5g -> 5 %d g %c
            printf("You entered the number: %d\n", number);
            flage=0;

        } else {
            printf("Invalid input! Please enter an integer.\n");

            while (getchar() != '\n');
        }
    }

    return number;
}
void add_emp (EMP e[])
{
    char check = '1';
    int size=0;
    int flage =1;
    while(e[size].id!=0 && e[size].salary!=0)
    {
    size++;
    }
    while(check)
    {
    printf("%d\n",size);
    if (size <SIZE){
    do{
    printf("enter employee name : ");
     scanf(" %99[^\n]", e[size].name);
    }while (!isValidString(e[size].name));
    while (flage){
    printf("enter employees id : ");
    e[size].id = GitInt();
    if (check_in(e ,e[size].id)){
    flage = 0 ;
    }
    }
    //e[size].id = flage;
    printf("enter employees salary : ");
    e[size].salary= GitInt();
    printf("press 1 if you want to add new empeloy  else press any key to display date");
    scanf("%c", &check);
    size++;

    }else
    {
    printf("you are out of rangr");
    check=0;
    }
    if(check!='1')
    {
    check=0;
    clrscr();
    choices(1);
    }
    flage = 1 ;
    }

}
void main()
{
EMP e[SIZE]={0};
char flag=0;
choices(flag);

char choice;


while(1){
choice=getch();
if(choice==EXTENDED){
    if (!kbhit())
    {
    return 0;
    }else{
    choice=getch();
    }
  }
clrscr();
switch(choice){
case RIGHT:
case UP:
flag--;
if(flag == -1)
    {
    flag=3;
    choices(flag);

    }
    choices(flag);
    break;
case LEFT:
case DOWN:
flag++;
if(flag == 4)
    {
    flag=0;
    choices(flag);

    }
    choices(flag);

break;

case ENTER:
    if(flag == 0)
    {
    clrscr();
    add_emp(e);
    flag++;
    //choices(0);
    }else if(flag == 1)
    {
    clrscr();
    print_emp(e);
    }else if(flag == 2)
    {
    clrscr();
    modi(e);
    choices(flag);
    }else if(flag == 3)
    {
    clrscr();
    return 0;
    }


break;
case F1:
    clrscr();
    printf("only avlible buttons \n");
    printf("arrows and to go up or down\n");
    printf("ENTER to go to specific  button\n");
    printf("BACKSPACE to go back \n");
    printf("home to go to mune \n");
    printf("End to go to exit choice \n");
    printf("new choice is for adding new employee \n");
    printf("Display choice for display employee in the system \n");
    printf("modfie is for edite date foe specific employee \n");
    printf("exitfor exit th program \n");


break;

case BACK:
    choices(flag);
break;
case HOME:
    flag=0;
    choices(flag);
break;
case END:
    flag =3;
    choices(flag);

break;

default:
printf("Invalid F1 please see Documentation");
break;



}
}
}
//void main(){
//printf("Enter\n");
//char choice=getch();
//printf("%d\n",choice);
//if(choice==27){
//    choice=getch();
//    printf("%d\n",choice);
//    choice=getch();
//    printf("%d\n",choice);
//  }
//}



