//PRIESTLEY FOMECHE
//APPROXIMATES THE VALUE OF THE CONSTANT e
//17TH AUGUST 2022

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n, i, j, result = 1;
    float e = 0.0f;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 0; i <= n; i++) {    //First loop to approximate value of e
        for (j = 0; j < i; j++)  //Second loop to compute consecutive factorials
        result *= i - j;

        e += 1.0f / result;
    }

    printf("\nThe approximate value of e is %f", e);

    return 0;
}
