//PRIESTLEY FOMECHE
//CALCULATES BALANCE ON LOAN
//14TH FEBRUARY 2022

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, payments;
    float loan, rate, monthlyPay;

    printf("Enter amount of loan: ");
    scanf("%f", &loan);
    printf("Enter interest rate: ");
    scanf("%f", &rate);
    printf("Enter monthly pay: ");
    scanf("%f", &monthlyPay);
    printf("Enter number of payments: ");
    scanf("%d", &payments);

    for (i = 1; i <= payments; i++) {
        loan = (loan - monthlyPay) + (loan * ((rate / 100.00f) / 12.00));
        printf("\nBalance remaining after payment: $%.2f\n", loan);
    }

    return 0;
}
