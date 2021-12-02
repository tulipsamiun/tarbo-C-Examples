#include <stdio.h>
#include <conio.h>

void main()
{
    int a = 1 , b = 1, sum = 0, n;
    clrscr();
    printf("Enter Value for n");
    scanf("%d" , &n);
    printf("%d\n", a);
    while (sum <=  n) {
         printf("%d\n",b);
         sum = a+ b;
         a = b; 
         b= sum;
    }
    getch();
}
