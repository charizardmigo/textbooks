//PRIESTLEY FOMECHE
//SELECTS EARLIER DATE AMONG TWO ENTERED BY USER
//15TH JANUARY 2022

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int date1, month1, year1, date2, month2, year2;

    printf("Enter first date (mm/dd/yyyy): ");
    scanf("%d/ %d/ %d", &month1, &date1, &year1);
    printf("Enter second date (mm/dd/yyyy): ");
    scanf("%d/ %d/ %d", &month2, &date2, &year2);
    printf("\n");

    if (month1 > 12 || month2 > 12 || date1 > 31 || date2 > 31)
        printf("Invalid Date Format!\n");

    else if (year1 < year2)
        printf("%.2d/%.2d/%d is earlier than %.2d/%.2d/%d\n", month1, date1, year1, month2, date2, year2);

    else if (year1 == year2 && month1 < month2)
        printf("%.2d/%.2d/%d is earlier than %.2d/%.2d/%d\n", month1, date1, year1, month2, date2, year2);

    else if (year1 == year2 && month1 == month2 && date1 < date2)
        printf("%.2d/%.2d/%d is earlier than %.2d/%.2d/%d\n", month1, date1, year1, month2, date2, year2);

    else
        printf("%.2d/%.2d/%d is earlier than %.2d/%.2d/%d\n", month2, date2, year2, month1, date1, year1);

    return 0;
}
