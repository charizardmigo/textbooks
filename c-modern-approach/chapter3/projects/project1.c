//PRIESTLEY FOMECHE
//CHANGES DATE FORM FROM USER
//6TH JANUARY 2022

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int day, month, year;

    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("\nYou entered the date %d%.2d%.2d\n", year, month, day);

    return 0;
}
