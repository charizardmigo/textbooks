//PRIESTLEY FOMECHE
//TRANSLATES AN ALPHABETIC PHONE NUMBER INTO NUMERIC FORM
//22ND AUGUST 2022

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char ch;

    printf("Enter phone number: ");

    while ((ch = getchar()) != '\n') {

        if (ch < 'A' || ch > 'z')
            putchar(ch);

        if (ch > 'Z' && ch < 'a')
            putchar(ch);

    switch (ch){
        case 'A': case 'B': case 'C': case 'a': case 'b': case 'c':
            printf("2");
            break;

        case 'D': case 'E': case 'F': case 'd': case 'e': case 'f':
            printf("3");
            break;

        case 'G': case 'H': case 'I': case 'g': case 'h': case 'i':
            printf("4");
            break;

        case 'J': case 'K': case 'L': case 'j': case 'k': case 'l':
            printf("5");
            break;

        case 'M': case 'N': case 'O': case 'm': case 'n': case 'o':
            printf("6");
            break;

        case 'P': case 'R': case 'S': case 'p': case 'r': case 's':
            printf("7");
            break;

        case 'T': case 'U': case 'V': case 't': case 'u': case 'v':
            printf("8");
            break;

        case 'W': case 'X': case 'Y': case 'w': case 'x': case 'y':
            printf("9");
            break;
    }
    }

    return 0;
}
