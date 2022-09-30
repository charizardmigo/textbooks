// PRIESTLEY FOMECHE
// B1FF COMMUNIQUE
// 6TH SEPTEMBER 2022

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define SIZE ((int)(sizeof(message) / sizeof(message[0])))

// METHOD 1

int main(void)
{
    int i;
    char message[100];

    printf("Enter message: ");

    i = 0;

    while ((message[i] = getchar()) != '\n')
    {
        switch (toupper(message[i]))
        {
        case 'A':
            message[i] = '4';
            break;

        case 'B':
            message[i] = '8';
            break;

        case 'E':
            message[i] = '3';
            break;

        case 'I':
            message[i] = '1';
            break;

        case 'O':
            message[i] = '0';
            break;

        case 'S':
            message[i] = '5';
            break;
        }
        i++;
    }
    message[i] = '\0';

    printf("\nIn B1FF-speak: ");

    i = 0;

    while (message[i] != '\0')
    {
        putchar(toupper(message[i]));
        i++;
    }

    printf("!!!!!!!!!!\n");

    return 0;
}

// METHOD 2

/*
int main(void)
{
    int i;
    char message[100];

    printf("Enter message: ");

    for (i = 0; i < SIZE; i++) {
        message[i] = getchar();

        if (message[i] == '\n')
            break;

        switch (toupper(message[i])) {
            case 'A': message[i] = '4';
                break;

            case 'B': message[i] = '8';
                break;

            case 'E': message[i] = '3';
                break;

            case 'I': message[i] = '1';
                break;

            case 'O': message[i] = '0';
                break;

            case 'S': message[i] = '5';
                break;
        }
    }

    printf("\nIn B1FF-speak: ");

    for (i = 0; i < SIZE; i++) {
        if (message[i] == '\n')
            break;

        putchar(toupper(message[i]));
    }

    printf("!!!!!!!!!!\n");

    return 0;
}
*/