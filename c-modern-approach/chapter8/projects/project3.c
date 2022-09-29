// PRIESTLEY FOMECHE
// SHOWS OCCURENCE OF REPEATED DIGITS IN A NUMBER (MODIFIED)
// 3RD SEPTEMBER 2022

#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int main(void)
{
    int digit_count[SIZE] = {0}, digit;
    long num, num2;

    do
    {
        printf("Enter a number (0 to terminate): ");
        scanf("%ld", &num);

        num2 = num;

    // Performs count for 1-digit numbers
    condition:
        if (num2 < 10)
        {
            digit = num2;
            digit_count[digit]++;
            num2 /= 10;
            continue;
        }

        // Performs count for more than 1-digit numbers
        digit = num2 % 10;
        digit_count[digit]++;
        num2 /= 10;

        if (num2 > 0)
            goto condition;

    } while (num > 0); // Tests if user input is 0 or negative

    printf("\nDigits:     ");

    for (digit = 0; digit < SIZE; digit++)
        printf("%4d", digit);

    printf("\nOccurences: ");

    for (digit = 0; digit < SIZE; digit++)
        printf("%4d", digit_count[digit]);

    printf("\n");

    return 0;
}