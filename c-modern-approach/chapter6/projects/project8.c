//PRIESTLEY FOMECHE
//PRINTS A ONE MONTH CALENDAR
//3RD FEBRUARY 2022

#include <stdio.h>
#include <stdlib.h>

int main(void)  
{
    int i, days, startDay;

    printf("Enter number of days in month: ");
    scanf("%d", &days);
    printf("Enter starting day of the week (1 = Mon, 7 = Sun): ");
    scanf("%d", &startDay);
    printf("\n   Mon  Tue  Wed  Thu  Fri  Sat  Sun \n");

   for (i = 1; i < startDay; i++)
        printf("     ");

    for (i = 1; i <= days; i++) {
        printf("%5d", i);

        if ((i + startDay - 1) % 7 == 0)
            printf("\n");
    }

    printf("\n");

    return 0;
}
