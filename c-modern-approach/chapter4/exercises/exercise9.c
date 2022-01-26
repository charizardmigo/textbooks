/*

C Programming: A Modern Approach (Second Edition)
Chapter 4, Exercise 9, Page 69

PRIESTLEY FOMECHE
10TH JANUARY 2022

Q: Show the output produced by each of the following program fragments.
   Assume that i, j and k are int variables.

   (a) i = 7; j = 8;
       i *= j + 1;
       printf("%d %d", i, j);

   (b) i = j = k = 1
       i += j += k;
       printf("%d %d %d", i, j, k);

   (c) i = 1; j = 2; k = 3;
       i -= j -= k;
       printf("%d %d %d", i, j, k);

   (d) i = 2; j = 1; k = 0;
       i *= j *= k;
       printf("%d %d %d", i, j, k);


A:
   (a) 63   8           i = i * (j + 1)
   (b)  3   2   1       i = i + (j = (j + k))
   (c)  2  -1   3       i = i - (j = (j - k))
   (d)  0   0   0       i = i * (j = (j * k))

*/
