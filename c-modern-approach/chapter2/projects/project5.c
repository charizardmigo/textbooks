//PRIESTLEY FOMECHE
//COMPUTES THE VALUE OF A POLYNOMIAL
//5TH JANUARY 2022

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int x, result;

    printf("The polynomial to be computed is 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6\n");
    printf("\nEnter a value for x: ");
    scanf("%d", &x);

    result = (3 * x * x * x * x * x) + (2 * x * x * x * x) - (5 * x * x * x) - (x * x) + (7 * x) - 6; //Solves polynomial from given x

    printf("\nThe value of the polynomial is %d\n", result);

    return 0;
}
