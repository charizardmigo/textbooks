/*

C Programming: A Modern Approach (Second Edition)
Chapter 6, Exercise 8, Page 121

PRIESTLEY FOMECHE
25TH JANUARY 2022

Q: What output does the following for statement produce?

   for (i = 10; i >= 1; i /= 2)
      printf("%d ", i++);


A: 10 5 3 2 1 1 1 1 1 1 1 1 . . .

   The . . . represents an endless stream of 1 s. The postfix increment operator in the
   printf format string will always cause the conditional operator in the for loop to return true.

*/
