//PRIESTLEY FOMECHE
//COUNTS VOWELS IN A SENTENCE
//23RD AUGUST 2022

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{
    int count = 0;
    char ch;

    printf("Enter a sentence: ");

    while ((ch = getchar()) != '\n') {

        switch (toupper(ch)) {
            case 'A' : case 'E': case 'I': case 'O': case 'U':
                count ++;
                break;
        }
    }

    printf("\nYour sentence contains %d vowels.\n", count);

    return 0;
}
