//PRIESTLEY FOMECHE
//DISPLAYS DEPATURE AND ARRIVAL TIME FOR FLIGHT WHOSE TIME IS CLOSER TO THAT ENTERED BY USER
//23RD AUGUST 2022

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{
    int hour, minute, value;
    char ch;

    printf("Enter a 12-hour time: ");
    scanf("%d:%d ", &hour, &minute);
    ch = getchar();
    printf("\n");

    if (hour == 12 && toupper(ch) == 'A')
        value = minute;

    else if (hour == 12 && toupper(ch) == 'P')
        value = hour * 60 + minute;

    else if (toupper(ch) == 'A')
        value = hour * 60 + minute;

    else if (toupper(ch) == 'P')
        value = (12 + hour) * 60 + minute;

    /*
        8:00 AM ------ 480
        9:43 AM ------ 583
        11:19 AM ------ 679
        12:47 PM ------ 767
        02:00 PM ------ 840
        03:45 PM ------ 945
        07:00 PM ------ 1140
        09:45 PM ------ 1305
    */

    if (value <= 480 + ((583 - 480) / 2))
        printf("Closest departure time is 8:00 AM, arriving at 10:16 AM\n");

    else if (value <= 583 + ((679 - 583) / 2))
        printf("Closest departure time is 9:43 AM, arriving at 11:52 AM\n");

    else if (value <= 679 + ((767 - 679) / 2))
        printf("Closest departure time is 11:19 AM, arriving at 1:31 PM\n");

    else if (value <= 767 + ((840 - 767) / 2))
        printf("Closest departure time is 12:47 PM, arriving at 3:00 PM\n");

    else if (value <= 840 + ((945 - 840) / 2))
        printf("Closest departure time is 2:00 PM, arriving at 4:08 PM\n");

    else if (value <= 945 + ((1140 - 945) / 2))
        printf("Closest departure time is 3:45 PM, arriving at 5:55 PM\n");

    else if (value <= 1140 + ((1305 - 1140) / 2))
        printf("Closest departure time is 7:00 PM, arriving at 9:20 PM\n");

    else if (value <= 1439)
        printf("Closest departure time is 9:45 PM, arriving at 11:58 PM\n");

    else
        printf("Time Format is invalid!");

    return 0;
}
