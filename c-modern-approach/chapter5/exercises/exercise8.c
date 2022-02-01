/*

C Programming: A Modern Approach (Second Edition)
Chapter 5, Exercise 8, Page 94

PRIESTLEY FOMECHE
14TH JANUARY 2022

Q: The following if statement is unnecessarily complicated. Simplify it as much as possible.
   (Hint: The entire statement can be replaced by a single statement).

   if (age >= 13)
    if (age <= 19)
        teenager = true;
    else
        teenager = false;
   else if (age < 13)
    teenager = false;


A: teenager = (age >= 13 && age <= 19) ? true : false;

*/
