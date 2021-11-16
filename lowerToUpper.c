#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>

void main()
{
   char text[100];
   int i;
   printf("Enter String");
   gets(text);
   for( i = 0; i < strlen(text);i ++){
       text[i] =  toupper(text[i]);
   }
   puts(text);
   getch();
}
