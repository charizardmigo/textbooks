/* Book example using character types.
   Determines the length of a message.
    Uses C idioms to shorten lines of code needed.
*/

#include <stdio.h>

int main(void)
{
    int length = 0;

    printf("Enter a message: ");

    while (getchar() != '\n') // idiom usage inside parentheses
        length++;

    printf("Your message is %d character(s) long.\n", length);

    return 0;
}