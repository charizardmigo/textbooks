//PRIESTLEY FOMECHE
//ADDS 5% TAX TO AMOUNT FROM USER
//5TH JANUARY 2022

#include <stdio.h>
#include <stdlib.h>
#define TAX 5.0f / 100.0f

int main(void)
{
    int amount;
    float tax;

    printf("Enter an amount: ");
    scanf("%d", &amount);

    tax = (TAX * amount) + amount; //Adds tax to amount

    printf("\nWith tax added: $%.2f\n", tax);

    return 0;
}
