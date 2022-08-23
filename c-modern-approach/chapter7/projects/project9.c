// PRIESTLEY FOMECHE
// CONVERTS A 12-HOUR TIME TO 24-HOUR TIME
// 23RD AUGUST 2022

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{
    int hour, minute;
    char ch;

    printf("Enter a 12-hour time: ");
    scanf("%d:%d ", &hour, &minute);
    ch = getchar();
    printf("\n");

    if (hour > 12 || minute > 59)
    {
        printf("INVALID TIME FORMAT");
        return 0;
    }

    else if (hour == 12 && toupper(ch) == 'A')
        hour = 0;

    else if (hour != 12 && toupper(ch) == 'P')
        hour += 12;

    printf("Equivalent 24-hour time: %.2d:%.2d", hour, minute);

    return 0;
}
