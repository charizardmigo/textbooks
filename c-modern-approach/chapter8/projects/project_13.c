// PRIESTLEY FOMECHE
// REVERSES A USER'S NAME (MODIFIED)
// 15TH SEPTEMBER 2022

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char ch, first, lastName[20];

    printf("Enter a first and last name: ");
    first = getchar();

    while (getchar() != ' ')
        ;

    for (int i = 0; i < 20; i++)
    {
        ch = getchar();

        if (ch == '\n')
            break;

        putchar(ch);
    }

    printf(", %c.\n", first);

    return 0;
}