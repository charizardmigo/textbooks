/*

C Programming: A Modern Approach (Second Edition)
Chapter 8, Exercise 9, Page 178

PRIESTLEY FOMECHE
27TH AUGUST 2022

Q:  Using the array of Exercise 8, write a program fragment that computes the average temperature for a month
    (averaged over all days of the month and all hours of the day).


A:
    #define DAYS 30
    #define HOURS 24

    double temperature_readings[DAYS][HOURS] = {0.0}, average = 0.0, sum;
    int count;

    for (int i = 0; i < DAYS; i++) {
        count = 0, sum = 0.0;

        for (int j = 0; j < HOURS; j++) {
            sum += temperature_readings[i][j];
            count++;
        }

        average += sum / count;
    }

    average /= DAYS;


   // An alternative approach is as follows:

    #define DAYS 30
    #define HOURS 24

    int i, j;
    double average = 0.0, temperature_readings[DAYS][HOURS];

    for (i = 0; i < DAYS; i++) {
        for (j = 0; j < HOURS; j++) {
            average += temperature_readings[i][j];
        }
    }

    average /= DAYS * HOURS;

*/