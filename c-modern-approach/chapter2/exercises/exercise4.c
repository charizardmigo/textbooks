/*

C Programming: A Modern Approach (Second Edition)
Chapter 2, Exercise 4, Page 33

PRIESTLEY FOMECHE
5TH JANUARY 2022

Q: Write a program that declares several int and float variables without initializing them and then prints their values.
   Is there any pattern to the values? (Usually there isn't.)

*/

#include <stdio.h>

int main(void)
{
    int a, b, c;
    float d, e, f;

    printf("Value of a: %d\n", a);
    printf("Value of b: %d\n", b);
    printf("Value of c: %d\n", c);

    printf("Value of d: %g\n", d);
    printf("Value of e: %g\n", e);
    printf("Value of f: %g\n", f);

    return 0;
}

/*

When compiled and run with gcc, it gives the following output:

Value of a: -682818240
Value of b: 22076
Value of c: 999197392
Value of d: 4.59163e-41
Value of e: 0
Value of f: 0

*/
