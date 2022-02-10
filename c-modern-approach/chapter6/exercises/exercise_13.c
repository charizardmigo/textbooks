/*

C Programming: A Modern Approach (Second Edition)
Chapter 6, Exercise 13, Page 122

PRIESTLEY FOMECHE
26TH JANUARY 2022

Q: Rewrite the following loop so that the loop body is empty:

    for (n = 0; m > 0; n++)
        m /= 2;

A:
    for (n = 0; m > 0 && m /= 2; n++)
    ;


*/
