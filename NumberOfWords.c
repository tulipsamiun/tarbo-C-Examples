#include <stdio.h>
#include <conio.h>
#include<string.h>

void main()
{
    char text[100];
    int i, count =1,  n;
    clescr();
    printf("Enter Text = ");
    gets(text);
    n =  strlen(text);
    for(i= 0 ; i < n; i++){
        if(text[i] == ' ')
        count++;
    }
    printf("Number of Words = %d", count);
    getch();
}
