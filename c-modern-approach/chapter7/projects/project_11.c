//PRIESTLEY FOMECHE
//REVERSES A USER'S NAME
//23RD AUGUST 2022

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char ch, first;

    printf("Enter a first and last name: ");
    first = getchar();

    while (getchar() != ' ')
        ;

    while ((ch = getchar()) != '\n') {
        putchar(ch);
    }

    printf(", %c.\n", first);

    return 0;
}
