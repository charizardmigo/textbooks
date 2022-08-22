/*

C Programming: A Modern Approach (Second Edition)
Chapter 7, Exercise 14, Page 157

PRIESTLEY FOMECHE
21ST AUGUST 2022

Q: Does the following statement always compute the fractional part of f correctly (assuming
   that f and frac_part are float variables)?

   frac_part = f - (int) f;

   If not, what's the problem?


A: It won't always work correctly. Converting f to int will fail if the value stored in f exceeds the largest value of type int.


*/
