// PRIESTLEY FOMECHE
// DISPLAYS DEPATURE AND ARRIVAL TIME FOR FLIGHT WHOSE TIME IS CLOSER TO THAT ENTERED BY USER (MODIFIED)
// 15TH SEPTEMBER 2022

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int hour, minute, depHour, depMin, arrHour, arrMin, value, i,
        departure[] = {480, 583, 679, 767, 840, 945, 1140, 1305},
        arrival[] = {616, 712, 811, 900, 968, 1075, 1280, 1438};
    char depch, arrch;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &minute);
    printf("\n");

    value = hour * 60 + minute;

    /*
        8:00 AM ------ 480    |  10:16 AM ------ 616
        9:43 AM ------ 583    |  11:52 AM ------ 712
        11:19 AM ------ 679   |  1:31 PM ------ 811
        12:47 PM ------ 767   |  3:00 PM ------ 900
        02:00 PM ------ 840   |  4:08 PM ------ 968
        03:45 PM ------ 945   |  5:55 PM ------ 1075
        07:00 PM ------ 1140  |  9:20 PM ------ 1280
        09:45 PM ------ 1305  |  11:58 PM ------ 1438
    */

    printf("Closest departure time is ");

    for (i = 0; i < 7; i++)
    { // Taking i < 7 here because the if statement adds 1 to i, which will cause undefined behavior when i becomes 8
        if (value <= (departure[i]) + ((departure[i + 1] - departure[i]) / 2))
        {
            depHour = (departure[i] / 60) > 12 ? (departure[i] / 60) - 12 : departure[i] / 60; // Computes the departure hour, converted to 12-hour time format
            depMin = departure[i] % 60;
            arrHour = (arrival[i] / 60) > 12 ? (arrival[i] / 60) - 12 : arrival[i] / 60; // Computes the arrival hour, converted to 12-hour time format
            arrMin = arrival[i] % 60;

            // Computes the meridians
            depch = (departure[i] / 60) > 11 ? 'P' : 'A';
            arrch = (arrival[i] / 60) > 11 ? 'P' : 'A';

            printf("%d:%.2d %cM, arriving at %d:%.2d %cM\n", depHour, depMin, depch, arrHour, arrMin, arrch);

            return 0;
        }
    }

    depHour = (departure[7] / 60) > 12 ? (departure[7] / 60) - 12 : departure[7] / 60; // Computes the departure hour for the last array value
    depMin = departure[7] % 60;
    arrHour = (arrival[7] / 60) > 12 ? (arrival[7] / 60) - 12 : arrival[7] / 60; // Computes the arrival hour for the last array value
    arrMin = arrival[7] % 60;

    // Computes the meridians
    depch = (departure[7] / 60) > 11 ? 'P' : 'A';
    arrch = (arrival[7] / 60) > 11 ? 'P' : 'A';

    printf("%d:%.2d %cM, arriving at %d:%.2d %cM\n", depHour, depMin, depch, arrHour, arrMin, arrch);

    return 0;
}