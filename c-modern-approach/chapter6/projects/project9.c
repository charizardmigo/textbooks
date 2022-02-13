//PRIESTLEY FOMECHE
//CALCULATES BALANCE ON LOAN
//3RD FEBRUARY 2022

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float loan, rate, monthlyPay, firstPay, secondPay, thirdPay;

    printf("Enter amount of loan: ");
    scanf("%f", &loan);
    printf("Enter interest rate: ");
    scanf("%f", &rate);
    printf("Enter monthly payment: ");
    scanf("%f", &monthlyPay);

    firstPay = (loan - monthlyPay) + (loan * ((rate / 100.00f) / 12.00)); //Computes balance after first monthly payment
    secondPay = (firstPay - monthlyPay) + (firstPay * ((rate / 100.00f) / 12.00)); //Computes balance after second monthly payment
    thirdPay = (secondPay - monthlyPay) + (secondPay * ((rate / 100.00f) / 12.00)); //Computes balance after third monthly payment

    printf("\nBalance remaining after first monthly payment: $%.2f", firstPay);
    printf("\nBalance remaining after second monthly payment: $%.2f", secondPay);
    printf("\nBalance remaining after third monthly payment: $%.2f\n", thirdPay);

    return 0;
}
