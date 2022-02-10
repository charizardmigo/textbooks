/*

C Programming: A Modern Approach (Second Edition)
Chapter 6, Exercise 10, Page 121

PRIESTLEY FOMECHE
25TH JANUARY 2022

Q: Show how to replace a continue statement by an equivalent goto statement.


A:  Consider the following while loop:

    while (...) {
    ...
    continue;
    ...
    }

    The equivalent code using goto would have the following appearance:

    while (...) {
    ...
    goto loop_end;
    ...
    loop_end:
       ;   // Null statement
    }

*/
