//PRIESTLEY FOMECHE
//COUNTS DIGITS OF A NUMBER
//15TH JANUARY 2022

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    long num;

    printf("Enter a number: ");
    scanf("%ld", &num);

    if (num < 10)
        printf("\nThe number %ld has 1 digit(s)\n", num);

    else if (num < 100)
        printf("\nThe number %ld has 2 digit(s)\n", num);

    else if (num < 1000)
        printf("\nThe number %ld has 3 digit(s)\n", num);

    else if (num < 10000)
        printf("\nThe number %ld has 4 digit(s)\n", num);

    return 0;
}
