//PRIESTLEY FOMECHE
//CHECKS EARLIER DATE ON CALENDAR
//16TH AUGUST 2022

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int day1, day2, month1, month2, year1, year2;

    printf("Enter a date (mm/dd/yy): ");
    scanf("%d /%d /%d", &month1, &day1, &year1);

    while (1) {
        printf("\nEnter a date (mm/dd/yy): ");
        scanf("%d /%d /%d", &month2, &day2, &year2);

        if (month1 > 12 || month2 > 12 || day1 > 31 || day2 > 31){
            printf("\nInvalid Date Entered");
            return 0;
        }

        if (day2 == 0 && month2 == 0 && year2 == 0)
            break;

        if (year2 < year1 || (year1 == year2 && month2 < month1) ||
            (year1 == year2 && month1 == month2 && day2 < day1)) {

            day1 = day2;
            month1 = month2;
            year1 = year2;
        }
    }

    printf("\n%.2d/%.2d/%.2d is the earliest date\n", month1, day1, year1);

    return 0;
}
