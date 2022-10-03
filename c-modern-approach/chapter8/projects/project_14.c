// PRIESTLEY FOMECHE
// REVERSES A SENTENCE
// 22ND SEPTEMBER 2022

#include <stdio.h>
#include <stdlib.h>
#define SIZE 100

int main(void)
{
    char sentence[SIZE], newSentence[SIZE], terminate;
    int i, j, count = 0, newCount = 0, lastValue;

    printf("Enter a sentence: ");

    for (i = 0; i < SIZE; i++)
    {
        sentence[i] = getchar(); // Reads characters one by one into array

        if (sentence[i] == '.' || sentence[i] == '!' || sentence[i] == '?')
        {
            lastValue = i;           // Stores the subscript of terminating character
            terminate = sentence[i]; // Stores the terminating character
            break;
        }

        ++count; // Computes the actual size of the array
    }

    ++count; // Increments size of array by 1

    // Copies the sentence into new array in reverse order
    for (i = 0, j = lastValue; i < count, j >= 0; i++, j--)
        newSentence[j] = sentence[i];

    printf("\nReversal of sentence: ");

    // Reverses the sentence copied into new array word by word to make sense
    for (i = 0; i <= count; i++)
    {

        if (newSentence[i] == ' ' || count == newCount)
        {

            for (j = newCount - 1; j > 0; j--)
            {
                if (newSentence[j] == ' ')
                    break;

                printf("%c", newSentence[j]);
            }

            if (count == newCount)
                break;

            else
                printf(" ");
        }

        ++newCount;
    }

    printf("%c\n", terminate); // Prints terminating character

    return 0;
}