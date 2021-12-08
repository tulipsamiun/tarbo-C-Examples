#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>

void main()
{
    int i, n, dec = 0;
    char bin[10];
    clrscr();
    printf("Enter Decimal Number = ");
    gets(bin);
    n = strlen(bin);
    n = n - 1;
    for( i = n; i >= 0; i--){
        dec = dec + ((bin[i] - 48) * pow(2,n-i));
    }
    printf("%d", dec);
    getch();
}
