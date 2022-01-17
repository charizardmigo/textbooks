//PRIESTLEY FOMECHE
//BREAKS DOWN DOLLAR BILLS
//5TH JANUARY 2022

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int amount, twenty, ten, five, one;

    printf("Enter a dollar amount: ");
    scanf("%d", &amount);

    twenty = amount / 20; //Computes number of $20 Bills
    amount = amount - (twenty * 20); //Subtracts all $20 Bills from amount

    ten = amount / 10; //Computes number of $10 Bills
    amount = amount - (ten * 10); //Subtracts all $10 Bills from balance

    five = amount / 5; //Computes number of $5 Bills
    amount = amount - (five * 5); //Subtracts all $5 Bills from balance

    one = amount / 1; //Computes number of $1 Bills

    printf("\n$20 Bills: %d\n", twenty);
    printf("$10 Bills: %d\n", ten);
    printf("$5 Bills: %d\n", five);
    printf("$1 Bills: %d\n", one);

    return 0;
}
