//PRIESTLEY FOMECHE
//COMPUTES A POLYNOMIAL USING HORNER'S RULE
//5TH JANUARY 2022

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int x, result;

    printf("The polynomial to be computed is 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6\n");
    printf("\nEnter a value for x: ");
    scanf("%d", &x);

    result = (((((3 * x) + 2) * (x - 5)) * (x - 1)) * (x + 7)) * (x - 6); //Solves polynomial from given x using Horner's rule

    printf("\nThe value of the polynomial is %d\n", result);

    return 0;

}
