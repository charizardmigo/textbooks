/*

C Programming: A Modern Approach (Second Edition)
Chapter 4, Exercise 11, Page 70

PRIESTLEY FOMECHE
10TH JANUARY 2022

Q: Show the output produced by each of the following program fragments.
   Assume that i, j and k are int variables.

   (a) i = 1;
       printf("%d ", i++ - 1);
       printf("%d", i);

   (b) i = 10; j = 5;
       printf("%d ", i++ - ++j);
       printf("%d %d", i, j);

   (c) i = 7; j = 8;
       printf("%d ", i++ - --j);
       printf("%d %d", i, j);

   (d) i = 3; j = 4; k = 5;
       printf("%d ", i++ - j++ + --k);
       printf("%d %d %d", i, j, k);


A: The bar ( | ) separates first printf calls from second
   (a) 0  |  2
   (b) 4  | 11  6
   (c) 0  |  8  7
   (d) 3  |  4  5  4

*/
