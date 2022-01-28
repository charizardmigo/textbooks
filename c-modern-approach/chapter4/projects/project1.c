//PRIESTLEY FOMECHE
//PRINTS A 2-DIGIT NUMBER FROM USER IN REVERSE
//10TH JANUARY 2022

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num;

    printf("Enter a 2-digit number: ");
    scanf("%d", &num);

    printf("\nThe reverse is %d%d\n", num % 10, num / 10);

    return 0;
}
