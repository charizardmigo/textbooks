// PRIESTLEY FOMECHE
// ENCRYPTS A MESSAGE USING CAESER CIPHER
// 22ND SEPTEMBER 2022

#include <stdio.h>
#include <stdlib.h>
#define SIZE 80

int main(void)
{
    int i, shift, count = 0;
    char unencrypted[SIZE], encrypted[SIZE];

    printf("Enter a message to be encrypted: ");

    for (i = 0; i < SIZE; i++)
    {
        unencrypted[i] = getchar();

        if (unencrypted[i] == '\n')
            break;

        count++;
    }

    ++count;

    printf("Enter shift amount (1 - 25): ");
    scanf("%d", &shift);

    printf("Encrypted message: ");

    for (i = 0; i < count; i++)
    {
        if (unencrypted[i] >= 'A' && unencrypted[i] <= 'Z')
            printf("%c", ((unencrypted[i] - 'A') + shift) % 26 + 'A');

        else if (unencrypted[i] >= 'a' && unencrypted[i] <= 'z')
            printf("%c", ((unencrypted[i] - 'a') + shift) % 26 + 'a');

        else
            printf("%c", unencrypted[i]);
    }

    return 0;
}