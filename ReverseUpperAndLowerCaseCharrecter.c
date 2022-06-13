#include <stdio.h>
#include <conio.h>
#include <ctype.h>

void main()
{
    int count, tag;
    char c, text[20];

    printf("%s","Enter a Line Of Text Bellow");
    for(count = 0; (text[count] = getchar()) != '\n'; ++count)
        tag = count;
    printf("%d", tag);
    for(count = 0; count < tag; ++count) {
        c = islower(text[count]) ? toupper(text[count]):tolower(text[count]);
    
    putchar(c);
    }
    getch();
}

