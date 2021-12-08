#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>

int main()
{
    int i, n, dec =0 ;
    char oct[10];
    clrscr();
    printf("Enter Number = ");
    gets(oct);
    n = strlen(oct);
    n= n-1;
    for (i=n ;i >=0; i --){
    dec = dec + ((oct[i] - 48) * pow(8,n-i));
    }
    printf("Decimsl = %d", dec);
    getch();
}
