#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>

void main()
{
    int i, n;
    char text[100];
    clrscr();
    printf("Ente the string :");
    gets(text);
    for (i = 0; i < n; i++ ) {
        if ( i%2 == 0)
            text[i] = toupper(text[i]);
        else
            text[i] = tolower(text[i]);
    }
    puts(text);
    getch();
}
