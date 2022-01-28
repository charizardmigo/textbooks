//PRIESTLEY FOMECHE
//PRINTS A 3-DIGIT NUMBER FROM USER IN REVERSE
//10TH JANUARY 2022

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num;

    printf("Enter a 3-digit number: ");
    scanf("%d", &num);

    printf("\nThe reverse is %d%d%d\n", num % 10, (num / 10) % 10, (num / 10) / 10);

    return 0;
}
