/*

C Programming: A Modern Approach (Second Edition)
Chapter 4, Exercise 14, Page 70

PRIESTLEY FOMECHE
10TH JANUARY 2022

Q: Supply parenthesis to show how a C Compiler would inteprete each of the following expressions:

   (a) a * b - c * d + e
   (b) a / b % c / d
   (c) - a - b + c - + d
   (d) a * - b / c - d

A:
   (a) ((a * b) - (c * d)) + e
   (b) ((a / b) % c) / d
   (c) ((- a - b) + c) - (+ d)
   (d) ((a * (- b)) / c) - d

*/
