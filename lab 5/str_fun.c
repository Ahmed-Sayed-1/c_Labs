#include <stdio.h>
#include <stdlib.h>
int Ahmed_Strlen(char text[]){
    int i = 0;
    while(text[i] != '\0'){
        i++;
    }
    return i;
};
//------------------------------------------------------------------
void Ahmed_Strcat(char dest[], char src[]){
int i = 0;
int j = strlen(dest);

while(src[i] != '\0' ){
    dest[j] = src[i]; \
    i++;
    j++;
}
dest[j] = '\0';
};
//-------------------------------------------------------------------------------
int Ahmed_Strcmp(char str1[], char str2[]){

    if(Ahmed_Strlen(str1) < Ahmed_Strlen(str2)){
        return -1;
    }
    if(Ahmed_Strlen(str1) > Ahmed_Strlen(str2)){
        return 1;
    }


for(int i =0; str1[i] != '\0'; i++){

    if(str1[i] > str2[i]){
        return 1;
    }
    if(str1[i] < str2[i]){
        return -1;
    }
}
return 0;
};
//--------------------------------------------------------------------------------
void Ahmed_Strcpy(char dest[], char source[],int dest_size){

    int i = 0;
    if( Ahmed_Strlen(source) < dest_size){
        for(i=0; source[i] != '\0'; i++){
            dest[i] = source[i];
        }
    dest[i] = '\0';
    }
    else{
        printf("source is less than destination.");
    }
};
//-------------------------------------------------------------------

void Ahmed_LowerToUpper(char text[]){
int i = 0;
while(text[i] != '\0'){
    if (text[i] >= 97 && text[i] <= 122){
        text[i] -= 32;
    }
    i++;
}
};
//------------------------------------------------------------
void Ahmed_UpperToLower(char text[]){
    int i =0;
    while(text[i] != '\0'){
        if(text[i] >= 65 && text[i] <= 90){
            text[i] = text[i] + 32;
        }
        i++;
    }
};
