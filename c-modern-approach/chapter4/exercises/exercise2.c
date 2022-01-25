/*

C Programming: A Modern Approach (Second Edition)
Chapter 4, Exercise 2, Page 69

PRIESTLEY FOMECHE
10TH JANUARY 2022

Q: If i and j are positive integers, does (-i)/j always have the same value as -(i/j)? Justify your answer.

A: In C89, they will not always have the same answer. Suppose that i is 9 and j is 7. The value of (-i)/j could
   be either -1 or -2, depending on the implementation. On the other hand, the value of -(i/j) is always -1,
   regardless of the implementation. In C99, the value of (-i)/j must be equal to the value of -(i/j).

*/
