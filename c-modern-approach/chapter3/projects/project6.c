//PRIESTLEY FOMECHE
//ADDS TWO FRACTIONS
//6TH JANUARY 2022

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num1, deNom1, num2, deNom2, resultNum, resultDenom;

    printf("Enter two fractions separated by a plus sign: ");
    scanf("%d/%d +%d/%d", &num1, &deNom1, &num2, &deNom2);

    resultNum = (num1 * deNom2) + (num2 * deNom1); //Calculates numerator
    resultDenom = deNom1 * deNom2; //Calculates denominator

    printf("\nThe sum is %d/%d\n", resultNum, resultDenom);

    return 0;
}
