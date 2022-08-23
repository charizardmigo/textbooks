//PRIESTLEY FOMECHE
//COMPUTES TWO FRACTIONS
//22ND AUGUST 2022

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num1, deNom1, num2, deNom2, resultNum, resultDenom;
    char ch;

    printf("Enter two fractions separated by a sign: ");
    scanf("%d/%d ", &num1, &deNom1);
    ch = getchar();
    scanf("%d/%d", &num2, &deNom2);

    if (ch == '+') {
        resultNum = (num1 * deNom2) + (num2 * deNom1); //Calculates numerator
        resultDenom = deNom1 * deNom2; //Calculates denominator
    }

    else if (ch == '-') {
        resultNum = (num1 * deNom2) - (num2 * deNom1); //Calculates numerator
        resultDenom = deNom1 * deNom2; //Calculates denominator
    }

    else if (ch == '*') {
        resultNum = num1 * num2; //Calculates numerator
        resultDenom = deNom1 * deNom2; //Calculates denominator
    }

    else if (ch == '/') {
        resultNum = num1 * deNom2; //Calculates numerator
        resultDenom = deNom1 * num2; //Calculates denominator
    }

    printf("\nThe sum is %d/%d\n", resultNum, resultDenom);

    return 0;
}
