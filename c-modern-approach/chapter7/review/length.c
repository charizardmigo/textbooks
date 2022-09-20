/* Book example using character types.
   Determines the length of a message.
*/

#include <stdio.h>

int main(void)
{
    char ch;
    int length = 0;

    printf("Enter a message: ");
    ch = getchar();

    while (ch != '\n')
    {
        length++;
        ch = getchar();
    }

    printf("Your message was %d character(s) long.\n", length);

    return 0;
}