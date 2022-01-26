/*

C Programming: A Modern Approach (Second Edition)
Chapter 4, Exercise 7, Page 69

PRIESTLEY FOMECHE
10TH JANUARY 2022

Q: The algorithm for computing the UPC check digit ends with the following steps:

   Subtract 1 from the total.
   Compute the remainder when the adjusted total is divided by 10.
   Subtract the remainder from 9.

   It's tempting to try to simplify the algorithm by using these steps instead:
   Compute the remainder when the total is divided by 10.
   Subtract the remainder from 10.

   Why doesn't this technique work?

*/

#include <stdio.h>

int main(void)
{
    int total = 11;

    printf("\n%d\n%d\n", 9 - ((total - 1) % 10), 10 - (total % 10));

    return 0;
}

/*

A: Using this technique, the results will equally be correct except for values of the total which are multiples of 10.

*/
