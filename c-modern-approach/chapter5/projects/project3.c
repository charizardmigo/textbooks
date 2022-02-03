//PRIESTLEY FOMECHE
//CALCULATES A BROKER'S AND RIVAL BROKER'S COMMISSION
//15TH JANUARY 2022

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int share, sharePrice;
    float commission, rivalCommission, value;

    printf("Enter the number of shares: ");
    scanf("%d", &share);
    printf("Enter the price per share: ");
    scanf("%d", &sharePrice);

    value = share * sharePrice;

    if (value < 2500.00f)
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

    if (commission < 39.00f)
        commission = 39.00f;

    if (share < 2000)
        rivalCommission = 33.00f + 0.03f * share; //Computes Rival's commission when shares are fewer than 2000

    else
        rivalCommission = 33.00f + 0.02f * share; //Computes Rival's commission when shares are greater than 2000

    printf("\nBroker's Commission: $%.2f\n", commission);
    printf("Rival Broker's Commission: $%.2f\n", rivalCommission);

    return 0;
}
