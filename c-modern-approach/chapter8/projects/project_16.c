// PRIESTLEY FOMECHE
// TESTS WHETHER 2 WORDS ARE ANAGRAMS
// 22ND SEPTEMBER 2022

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define SIZE 26

int main(void)
{
    int value[SIZE], i, sum = 0;
    char ch;

    for (i = 0; i < SIZE; i++)
        value[i] = 0;

    printf("Enter first word: ");

    while ((ch = getchar()) != '\n')
    {
        if (toupper(ch) >= 'A' && toupper(ch) <= 'Z')
            ++value[toupper(ch) - 'A'];
    }

    printf("\nEnter second word: ");

    while ((ch = getchar()) != '\n')
    {
        if (toupper(ch) >= 'A' && toupper(ch) <= 'Z')
            --value[toupper(ch) - 'A'];
    }

    for (i = 0; i < SIZE; i++)
        sum += value[i];

    for (i = 0; i < SIZE; i++)
    {
        if (value[i] != 0)
            break;

        sum++;
    }

    if (sum == 26)
        printf("\nThe words are anagrams.\n");

    else
        printf("\nThe words are not anagrams.\n");

    return 0;
}