/*

C Programming: A Modern Approach (Second Edition)
Chapter 2, Exercise 10, Page 34

PRIESTLEY FOMECHE
5TH JANUARY 2022

Q: In the dweight.c program (Section 2.4), which spaces are essential?

*/

#include <stdio.h>

int main(void)
{
    int height, length, width, volume, weight;

    height = 8;
    length = 12;
    width = 10;
    volume = height * length * width;
    weight = (volume + 165) / 166;

    printf("Dimensions: %dx%dx%d\n", length, width, height);
    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", weight);

    return 0;
}

/*

A: line 15, between int and main
   line 17, between int and height
   line 29, between return and 0

*/
