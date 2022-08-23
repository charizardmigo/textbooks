//PRIESTLEY FOMECHE
//PRINTS VALUES OF VARIOUS TYPE SIZES
//22ND AUGUST 2022

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    printf("Size of int: %d\n", (int) sizeof(int));
    printf("Size of short: %d\n", (int) sizeof(short));
    printf("Size of long: %d\n", (int) sizeof(long));
    printf("Size of float: %d\n", (int) sizeof(float));
    printf("Size of double: %d\n", (int) sizeof(double));
    printf("Size of long double: %d\n", (int) sizeof(long double));

    /*Since the type of a sizeof expression may vary from
    one implementation to another, it's necessary in C89 to
    cast sizeof expressions to a known type before printing them.
    But generally, it's best to cast sizeof expressions to unsigned
    long and print them using %lu.*/

    return 0;
}
