// PRIESTLEY FOMECHE
// SHOWS REPEATED DIGITS IN A NUMBER
// 2ND SEPTEMBER 2022

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define SIZE 10

int main(void)
{
    bool digit_seen[SIZE] = {false};
    int to_print[SIZE] = {0}, digit, empty = 0, i;
    long num;

    printf("Enter a number: ");
    scanf("%ld", &num);

    while (num > 0)
    {
        digit = num % 10;

        if (digit_seen[digit])
            ++to_print[digit];

        digit_seen[digit] = true;
        num /= 10;
    }

    for (i = 0; i < SIZE; i++)
    {
        empty += to_print[i];
    }

    if (!empty)
    {
        printf("\nNo repeated digits\n");
        return 0;
    }

    else
    {
        printf("\nRepeated digits(s): ");

        for (i = 0; i < SIZE; i++)
        {
            if (to_print[i] > 0)
                printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}