// PRIESTLEY FOMECHE
// SCRABBLE GAME (MODIFIED)
// 15TH SEPTEMBER 2022

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{
    int count = 0, scrabble[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3,
                                 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
    char ch;

    printf("Enter a word: ");

    while ((ch = getchar()) != '\n')
        count += scrabble[toupper(ch) - 'A'];

    printf("\nScrabble value: %d\n", count);

    return 0;
}