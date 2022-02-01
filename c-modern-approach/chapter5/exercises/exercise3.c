/*

C Programming: A Modern Approach (Second Edition)
Chapter 5, Exercise 3, Page 94

PRIESTLEY FOMECHE
14TH JANUARY 2022

Q: The following program fragments illustrate the short-circuit behaviour of logical operators.
   Show the output produced by each, assuming that i, j and k are int variables.

   (a) i = 3; j = 4, k = 5;
       printf("%d ", i < j || ++j < k);
       printf("%d %d %d", i, j, k);

   (b) i = 7; j = 8, k = 9;
       printf("%d ", i - 7 && j++ < k);
       printf("%d %d %d", i, j, k);

   (c) i = 7; j = 8, k = 9;
       printf("%d ", (i = j) || (j = k));
       printf("%d %d %d", i, j, k);

   (d) i = 1; j = 1; k = 1;
       printf("%d ", ++i || ++j && ++k);
       printf("%d %d %d", i, j, k);

A: (a) 1 | 3 4 5
   (b) 0 | 7 8 9
   (c) 1 | 8 8 9
   (d) 1 | 2 1 2

*/
