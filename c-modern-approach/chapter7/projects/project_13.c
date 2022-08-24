//PRIESTLEY FOMECHE
//CALCULATES AVERAGE WORD LENGTH FOR A SENTENCE
//23RD AUGUST 2022

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int count = 0, word = 0;
    char ch;

    printf("Enter a sentence: ");

    while ((ch = getchar()) != '\n') {

        if (ch == ' ') {
            word++;
            continue;
        }
        count++;
    }
    word++; //Last word

    printf("Average word length: %.1f", (float) count / word);

    return 0;
}
