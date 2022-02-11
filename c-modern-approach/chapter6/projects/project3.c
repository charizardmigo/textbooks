//PRIESTLEY FOMECHE
//BREAKS DOWN A FRACTION TO LOWEST TERMS
//26TH JANUARY 2022

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num1, num2, denom1, denom2, rem;

    printf("Enter a fraction: ");
    scanf("%d/%d", &num1, &denom1);

    num2 = num1;
    denom2 = denom1;

     while (denom2) {
        rem = num2 % denom2;
        num2 = denom2;
        denom2 = rem;
    }

    printf("\nIn lowest terms: %d/%d\n", num1 / num2, denom1 / num2);

    return 0;
}
