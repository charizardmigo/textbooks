//PRIESTLEY FOMECHE
//PRINTS A 3-DIGIT NUMBER FROM USER IN REVERSE
//10TH JANUARY 2022

#include <stdio.h>
#include <stdlib.h>
     
int main(void)
{
    int num1, num2, num3;

    printf("Enter a 3-digit number: ");
    scanf("%1d%1d%1d", &num1, &num2, &num3);

    printf("\nThe reverse is %d%d%d\n", num3, num2, num1);

    return 0;
}
