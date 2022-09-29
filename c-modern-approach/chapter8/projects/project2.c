// PRIESTLEY FOMECHE
// SHOWS OCCURENCE OF REPEATED DIGITS IN A NUMBER
// 3RD SEPTEMBER 2022

#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int main(void)
{
    int digit_count[SIZE] = {0}, digit;
    long num;

    printf("Enter a number: ");
    scanf("%ld", &num);

    while (num > 0)
    {
        digit = num % 10;
        digit_count[digit]++;
        num /= 10;
    }

    printf("\nDigits:     ");

    for (digit = 0; digit < SIZE; digit++)
        printf("%4d", digit);

    printf("\nOccurences: ");

    for (digit = 0; digit < SIZE; digit++)
        printf("%4d", digit_count[digit]);

    printf("\n");

    return 0;
}