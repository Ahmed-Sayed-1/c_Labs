#include <stdio.h>
#include <stdlib.h>
#include "conio.h" // Include conio.h for `getch` and `kbhit`

// Define constants for special keys and attributes
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
#define F2 82
#define F3 83
#define F4 84

// Function to calculate string length
int Ahmed_Strlen(char text[]) {
    int i = 0;
    while (text[i] != '\0') {
        i++;
    }
    return i;
}

int main() {
    char text[SIZE] = {'\0'}; // Buffer for storing text
    //scanf(" %99[^\n]", text); // Read a line of text (up to 99 characters)
    //printf("%s", text);
    int flag=0;
    int len = Ahmed_Strlen(text); // Calculate the initial length of the text
    char choice; // Variable to store the user input key

    while (1) {
        choice = getch(); // Read a key press

        if (choice == EXTENDED) { // Check for extended keys
            if (!kbhit()) {
                return 0; // Exit if no additional key is pressed
            } else {
                getch(); // Consume intermediate character
                choice = getch(); // Get the actual extended key
            }
        }

        switch (choice) {
            case RIGHT:
            case UP:
                if (len != Ahmed_Strlen(text)) {
                    len++;
                    gotoxy1(0,len+1); // Move cursor right
                }
                break;

            case LEFT:
                if (len != 0) {
                    len--;
                    gotoxy1(0,len+1);
                }
               // Move cursor left
                break;

            case ENTER:
                // Handle ENTER key
                break;

            case F1:
                if(flag==1)
                {
                flag=0;
                }else
                {
                flag =1;
                }
                break;

            case BACK:
                if (len>0){
                for(int i=len-1 ; i<Ahmed_Strlen(text) ; i++ )
                {
                    text[i]=text[i+1];
                }
                clrscr();
                printf("%s", text);
                len--;
                gotoxy1(0,len+1);
                }

                break;

            case HOME:
                len=0;
                gotoxy1(0,len);
                break;

            case END:
                len=Ahmed_Strlen(text);
                gotoxy1(0,len+1);

                break;
            case DOWN:
                //printf("%d\n",Ahmed_Strlen(text));
                //printf("%d\n",len);
                if (len < Ahmed_Strlen(text)){
                //printf("%d",Ahmed_Strlen(text));
                for(int i=len ; i<Ahmed_Strlen(text) ; i++ )
                {
                    text[i]=text[i+1];
                }
                clrscr();
                printf("%s", text);
                gotoxy1(0,len+1);
                }
                break;
            default:

                if(Ahmed_Strlen(text)<SIZE)
                {
                    if(flag)
                    {
                        text[Ahmed_Strlen(text)+1]='\0';
                        int i=Ahmed_Strlen(text);
                        for(i ; i>=len;i--)
                        {
                            text[i]=text[i-1];
                        }
                        text[len]=choice;
                        clrscr();
                        printf("%s", text);
                        len++;
                        gotoxy1(0,len+1);
                    }else
                    {
                        text[len]=choice;
                        clrscr(); // Clear the screen on default key press
                        printf("%s", text);
                        len++;
                        gotoxy1(0,len+1);
                    }

                }else
                {
                printf("you are out of the range");
                }


                break;
        }
    }
}

// Uncomment for testing extended keys:
// int main() {
//     printf("Enter\n");
//     char choice = getch();
//     printf("%d\n", choice);
//     if (choice == EXTENDED) {
//         choice = getch();
//         printf("%d\n", choice);
//         choice = getch();
//         printf("%d\n", choice);
//     }
// }
/**/
