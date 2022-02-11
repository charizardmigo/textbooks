//PRIESTLEY FOMECHE
//PRINTS A NUMBER IN REVERSE
//26TH JANUARY 2022

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num, digits = 0;

    printf("Enter a number: ");
    scanf("%d", &num);
    printf("\nThe reverse is ");

    do {
        printf("%d", num % 10);
        num /= 10;

    } while (num);

    printf("\n");

    return 0;
}
