/*

C Programming: A Modern Approach (Second Edition)
Chapter 2, Exercise 3, Page 33

PRIESTLEY FOMECHE
5TH JANUARY 2022

Q: Condense the weight. c program by:
   (1) replacing the assignments to height, length and width with initializers and
   (2) removing the weight variable, instead calculating (volume + 165) / 166 within the last printf.

*/

#include <stdio.h>

int main(void)
{
    int height = 8, length = 12, width = 10, volume;

    volume = height * length * width;

    printf("Dimensions: %d x %d x %d\n", length, width, height);
    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", (volume + 165) / 166);

    return 0;
}

/*

The output of the program looks like this:

Dimensions: 12 x 10 x 8
Volume (cubic inches): 960
Dimensional weight (pounds): 6

*/
