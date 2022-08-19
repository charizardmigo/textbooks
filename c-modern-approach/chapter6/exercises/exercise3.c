/*

C Programming: A Modern Approach (Second Edition)
Chapter 6, Exercise 3, Page 121

PRIESTLEY FOMECHE
25TH JANUARY 2022

Q: What output does the following for statement produce?

   for (i = 5, j = i - 1; i > 0, j > 0; --i, j = i - 1){
    printf("%d ", i);
   }


A: 5 4 3 2

   The program does not print the expected 1 because of the misuse of the comma operator
   separating the conditional expressions in the for loop: The first expression i > 0 is always discarded.

*/
