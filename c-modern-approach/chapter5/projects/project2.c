//PRIESTLEY FOMECHE
//CONVERTS A 24-HOUR TIME TO 12-HOUR TIME FORMAT
//15TH JANUARY 2022

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int hour, minute;

    printf("Enter a 24-hour time (hh:mm): ");
    scanf("%d:%d", &hour, &minute);

    if (hour == 0 && minute < 60)
        printf("\nEquivalent 12-hour time: 12:%.2d AM\n", minute);

    else if (hour < 12 && minute < 60)
        printf("\nEquivalent 12-hour time: %.2d:%.2d AM\n", hour, minute);

    else if (hour == 12 && minute < 60)
        printf("\nEquivalent 12-hour time: 12:%.2d PM\n", minute);

    else if (hour < 24 && minute < 60)
        printf("\nEquivalent 12-hour time: %.2d:%.2d PM\n", hour - 12, minute);

    else
        printf("\nINCORRECT TIME FORMAT!\n");

    return 0;
}
