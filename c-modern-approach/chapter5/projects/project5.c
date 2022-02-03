//PRIESTLEY FOMECHE
//CALCULATES USER'S TAX DUE FROM TAXABLE INCOME
//15TH JANUARY 2022

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    long income;
    float taxDue;

    printf("Enter your income: ");
    scanf("%ld", &income);

    if (income < 750)
        taxDue = 0.01f * income;

    else if (income < 2250)
        taxDue = 7.50f + 0.02f * income;

    else if (income < 3750)
        taxDue = 37.50f + 0.03f * income;

    else if (income < 5250)
        taxDue = 82.50f + 0.04f * income;

    else if (income < 7000)
        taxDue = 142.50f + 0.05f * income;

    else
        taxDue = 230.00f + 0.06f * income;

    printf("\nYour tax due is $%.2f\n", taxDue);

    return 0;
}
