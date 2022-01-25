/*

C Programming: A Modern Approach (Second Edition)
Chapter 4, Exercise 1, Page 68

PRIESTLEY FOMECHE
10TH JANUARY 2022

Q: Show the output produced by each of the following program fragments. Assume that i, j and k are int variables.

   (a) i = 5; j = 3;
       printf("%d %d" i / j, i % j);

   (b) i = 2; j = 3;
       printf("%d", (i + 10) % j);

   (c) i = 7; j = 8; k = 9;
       printf("%d", (i + 10) % k / j);

   (d) i = 1; j = 2; k = 3;
       printf("%d", (i + 5) % (j + 2) / k);


A: (a) 1 2
   (b) 0
   (c) 0 [The multiplicative operators are left associative, hence can be simplified as ((i + 10) % k) / j]
   (d) 0 [Simplification: ((i + 5) % (j + 2)) / k]

*/
