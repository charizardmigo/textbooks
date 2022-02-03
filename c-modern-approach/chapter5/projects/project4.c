//PRIESTLEY FOMECHE
//DESCRIBES WIND SPEED FROM VALUE ENTERED BY USER (IN KNOTS)
//15TH JANUARY 2022

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int speed;

    printf("Enter wind speed (in knots): ");
    scanf("%d", &speed);
    printf("\n");

    if (speed < 1)
        printf("Calm\n");

    else if (speed < 4)
        printf("Light air\n");

    else if (speed < 28)
        printf("Breeze\n");

    else if (speed < 48)
        printf("Gale\n");

    else if (speed < 63)
        printf("Storm\n");

    else
        printf("Hurricane\n");

    return 0;
}
