//PRIESTLEY FOMECHE
//COMPUTES SQUARE ROOT OF A FLOATING-POINT NUMBER (NEWTON'S METHOD)
//24TH AUGUST 2022

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define CONSTANT 0.00001

int main(void)
{
    double num, y = 1.00, sqrt;
    int terminate;

    printf("Enter a positive number: ");
    scanf("%lf", &num);

    do {
        sqrt = ((num / y) + y) / 2;

        if (fabs (y - sqrt) < y * CONSTANT)
            terminate = 1;

        y = sqrt;

    } while (terminate != 1);

    printf("Square root: %.5lf", sqrt);

    return 0;
}
