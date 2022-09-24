/*

C Programming: A Modern Approach (Second Edition)
Chapter 8, Exercise 1, Page 177

PRIESTLEY FOMECHE
27TH AUGUST 2022

Q:  We discussed using the expression sizeof(a) / sizeof(a[0]) to calculate the number of elements
    in an array. The expression sizeof(a) / sizeof(t), where t is the type of a's elements, would
    also work, but is considered an inferior technique. Why?


A:  Because it can't easily be checked for correctness by someone reading the program.
    The reader would have to locate the declaration of a and make sure that its elements have type t.

*/