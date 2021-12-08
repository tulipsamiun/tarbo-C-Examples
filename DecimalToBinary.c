#include <stdio.h>
#include <conio.h>
#include <string.h>

void  main()
{
    int i, num, flag, q, reminder, bin[10];
    printf("Enter Decimal Number = ");
    scanf("%d", &num);
    for (i = 0; i < 10; i++ ){
       reminder = num % 2;
       bin[i] = reminder;
       q =  num /2;
       num = q; 
       flag = i;
    }
    for ( i = flag; i >= 0; i--){
        printf("%d", bin[i]);
    }
    getch() ;
}
