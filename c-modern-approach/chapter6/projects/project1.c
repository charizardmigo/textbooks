//PRIESTLEY FOMECHE
//FINDS LARGEST NUMBER AMONGST A SERIES OF OTHERS
//26TH JANUARY 2022

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float n, m, large;

    printf("Enter a number (0 to terminate): ");
    scanf("%f", &n);

    while (n > 0.0f) {
        printf("Enter a number: ");
        scanf("%f", &m);

        if (m > n)
            large = m;
        else
            n = m;
    }

    printf("\nThe largest number entered was %.2f\n", large);

    return 0;
}

//ALTERNATIVE METHOD

/*
int main(void)
{
    float n, large = 0.0f;

    do {
        printf("Enter a number (0 to terminate): ");
        scanf("%f", &n);

        if (n > large)
            large = n;
    } while (n > 0.0f);

    printf("\nThe largest number entered was %.2f\n", large);

    return 0;
}

*/
