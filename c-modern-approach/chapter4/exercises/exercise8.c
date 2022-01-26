/*

C Programming: A Modern Approach (Second Edition)
Chapter 4, Exercise 8, Page 69

PRIESTLEY FOMECHE
10TH JANUARY 2022

Q: Would the upc.c program still work if the expression 9 - ((total - 1) % 10) were
   replaced by (10 - (total % 10) ) % 10?

*/

#include <stdio.h>

int main(void)
{
    int total = 11;

    printf("\n%d\n%d\n", 9 - ((total - 1) % 10), (10 - (total % 10)) % 10);

    return 0;
}

/*

A: The program still works. The above program demonstrates it.

*/
