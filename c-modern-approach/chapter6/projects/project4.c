//PRIESTLEY FOMECHE
//CALCULATES COMMISSION FOR EACH TRADE ENTERED BY USER
//26TH JANUARY 2022

#include <stdio.h>
#include <stdlib.h>

int main(void)  
{
    float commission, rivalCommission, value;

    while (value) {
    printf("Enter the value of trade: ");
    scanf("%f", &value);

    if (commission < 39.00f)
        commission = 39.00f;

    else if (value < 2500.00f)
        commission = 30.00f + 0.017f * value;

    else if (value < 6250.00f)
        commission = 56.00f + 0.0066f * value;

    else if (value < 20000.00f)
        commission = 76.00f + 0.0034f * value;

    else if (value < 50000.00f)
        commission = 100.00f + 0.0022f * value;

    else if (value < 500000.00f)
        commission = 155.00f + 0.0011f * value;

    else
        commission = 255.00f + 0.0099f * value;

    printf("Commission: $%.2f\n\n", commission);

    }

    return 0;
}
