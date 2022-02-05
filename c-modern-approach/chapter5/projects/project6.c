//PRIESTLEY FOMECHE
//CHECKS THE VALIDITY OF A UNIVERSAL PRODUCT CODE (UPC) CHECK DIGIT
//15TH JANUARY 2022

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, firstSum, secondSum, total, checkDigit;

    printf("Enter the first 11 digits of a UPC: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d, &i1, &i2, &i3, &i4, &i5, &j1, &j2, &j3, &j4, &j5);

    firstSum = d + i2 + i4 + j1 + j3 + j5;
    secondSum = i1 + i3 + i5 + j2 + j4;
    total = (3 * firstSum) + secondSum;

    checkDigit = 9 - ((total - 1) % 10);

    if (checkDigit == 9 - ((total - 1) % 10));
        printf("\nVALID\n");

    else
        printf("\nNOT VALID\n");

    return 0;
}
