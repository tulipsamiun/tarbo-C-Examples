#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include < string.h>

void main()
{
    int i, n;
    char text[100];
    printf("Enter The String =");
    gets(text);
    n =strlen(text);
    for( i=0; i <n; i+=2){
        text[i] = toupper(text[i]);
    }
    printf("text = %s", text);
    getch();
}
