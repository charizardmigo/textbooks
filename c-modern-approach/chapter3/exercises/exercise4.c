/*

C Programming: A Modern Approach (Second Edition)
Chapter 3, Exercise 4, Page 49

PRIESTLEY FOMECHE
6TH JANUARY 2022

Q: Suppose that we call scan as follows:
   scanf("%d%f%d", &i, &x, &j);

   If the user enters

   10.3 5 6

   what will be the values of i, x, and j after the call? (Assume that i and j are int variables
   and x is a float variable.)


A:
   - Conversion specification %d: scanf reads character 1 and determines that int can contain a 1, so it
                                  reads the next character 0, which ints can also contain. scanf then reads
                                  the next character . and determines that ints cannot contain a decimal.
                                  scanf then terminates and stores 10 in the first int variable.

   - Conversion specification %f: scanf reads the . character and determines that floats can contain a decimal.
                                  It then reads 3 and determines that floats can contain it. Next is the space
                                  character which scanf ignores and stores 0.3 in the float variable.

   - Conversion specification %d: scanf reads 5 and determines that it can be stored in an int variable. Next,
                                  it reads the whitespace character and ignores it. scanf then reads the number
                                  6 but finds no format specifiers which determines where it can be stored so 6
                                  is discarded and the program terminates.

   - Final Answer:
                    - i = 10
                    - x = 0.300000 (See Note Below)
                    - j = 5

   - Note: If a float doesn't contain a non-zero value before the decimal point, C prints a 0 before the decimal point.
           If a float conversion specifier doesn't contain any format specifications, C prints decimals to six places
           after the decimal and adds zeroes where needed by default.

*/
