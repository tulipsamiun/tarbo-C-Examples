#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>


void main()
{
    char text[100];
    int i,n;
    clrscr();
    printf("Enter Uper Case Character : ");
    gets(text);
    n = strlen(text);
    text[0] = toupper(text[0]);
    for( i = 1 ; i < n; i++){
        if(text[i-1] == ' '){
            text[i] = toupper(text[i]);
        
        }
        else 
            text[i] =tolower(text[i]);
    }
    puts(text);
    getch();
    

    return 0;
}
