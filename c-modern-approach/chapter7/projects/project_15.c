//PRIESTLEY FOMECHE
//COMPUTES FACTORIAL OF A POSITIVE INTEGER
//24TH AUGUST 2022

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num;
    long long fact = 1ll;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    for (int i = 0; i < num; i++)
        fact *= (num - i);

    printf("\nFactorial of %d: %ld\n", num, fact); //Variate format specifier to test various types

    return 0;
}

/*

(a) short: Largest value is 7
(b) int: Largest value is 16
(c) long: Largest value is 20
(d) long long: Not supported by my compiler
(e) float: Largest value is 34
(f) double: Largest value is 170
(g) long double: Largest value is 1754




*/
