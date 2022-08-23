//PRIESTLEY FOMECHE
//SCRABBLE GAME
//22ND AUGUST 2022

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{
    int count = 0;
    char ch;

    printf("Enter a word: ");

    while ((ch = getchar()) != '\n') {

        switch (toupper(ch)) {
            case 'D': case 'G':
                count += 2;
                break;

            case 'B': case 'C': case 'M': case 'P':
                count += 3;
                break;

            case 'F': case 'H': case 'V': case 'W': case 'Y':
                count += 4;
                break;

            case 'K':
                count += 5;
                break;

            case 'J': case 'X':
                count += 8;
                break;

            case 'Q': case 'Z':
                count += 10;
                break;

            default:
                count ++;
                break;
        }
    }

    printf("\nScrabble value: %d\n", count);

    return 0;
}
