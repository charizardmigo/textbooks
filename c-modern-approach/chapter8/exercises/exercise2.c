/*

C Programming: A Modern Approach (Second Edition)
Chapter 8, Exercise 2, Page 177

PRIESTLEY FOMECHE
27TH AUGUST 2022

Q:  The Q&A section shows how to use a letter as an array subscript. Describe how to use a digit (in character form)
    as a subscript.


A:  We would write a[ch-'0'] for an array named a. This assumes that digits have consecutive codes in the underlying
    character set, which is true of ASCII and other popular character sets.

    If ch is a char containing a digit character '9':

    a[ch - '0'] == a[9];  //true

*/