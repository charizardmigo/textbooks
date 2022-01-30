//PRIESTLEY FOMECHE
//COMPUTES A EUROPEAN ARTICLE NUMBER (EAN) CHECK DIGIT
//14TH JANUARY 2022

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i1, i2, i3, i4, i5, i6, j1, j2, j3, j4, j5, j6, firstSum, secondSum, total;

    printf("Enter the first 12 digits of a EAN: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5, &i6, &j1, &j2, &j3, &j4, &j5, &j6);

    firstSum = i2 + i4 + i6 + j2 + j4 + j6;
    secondSum = i1 + i3 + i5 + j1 + j3, j5;
    total = (3 * firstSum) + secondSum;

    printf("\nCheck Digit: %d\n", 9 - ((total - 1) % 10));

    return 0;
}
