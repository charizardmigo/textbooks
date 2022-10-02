// PRIESTLEY FOMECHE
// TRANSLATES AN ALPHABETIC PHONE NUMBER INTO NUMERIC FORM (MODIFIED)
// 15TH SEPTEMBER 2022

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define SIZE 15

int main(void)
{
    int i;
    char phoneNum[SIZE];

    printf("Enter phone number: ");

    for (i = 0; i < SIZE; i++)
    {
        phoneNum[i] = getchar();

        if (phoneNum[i] == '\n')
            break;
    }

    for (i = 0; i < SIZE; i++)
    {
        if (phoneNum[i] == '\n')
            break;

        switch (toupper(phoneNum[i]))
        {
        case 'A':
        case 'B':
        case 'C':
            printf("2");
            break;

        case 'D':
        case 'E':
        case 'F':
            printf("3");
            break;

        case 'G':
        case 'H':
        case 'I':
            printf("4");
            break;

        case 'J':
        case 'K':
        case 'L':
            printf("5");
            break;

        case 'M':
        case 'N':
        case 'O':
            printf("6");
            break;

        case 'P':
        case 'R':
        case 'S':
            printf("7");
            break;

        case 'T':
        case 'U':
        case 'V':
            printf("8");
            break;

        case 'W':
        case 'X':
        case 'Y':
            printf("9");
            break;

        default:
            putchar(phoneNum[i]);
            break;
        }
    }

    return 0;
}