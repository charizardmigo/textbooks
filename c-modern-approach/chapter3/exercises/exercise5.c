/*

C Programming: A Modern Approach (Second Edition)
Chapter 3, Exercise 5, Page 49

PRIESTLEY FOMECHE
6TH JANUARY 2022

Q: Suppose that we call scanf as follows:
   scanf("%f%d%f", &x, &i, &y);

   If the user enters

   12.3 45.6 789

   What will be the values of x, i, and y after the call? (Assume that x and y are
   float variables and i is an int variable)


A:
   - Conversion specification %f: scanf reads character 1 and determines that float can contain a 1,
                                  so it reads the next character 2, which floats can also contain.
                                  scanf reads the next character . and determines that floats can
                                  contain a decimal. scanf then reads the next character 3 and
                                  determines that floats can contain it. The next character, a space
                                  character, is read by scanf and skipped. scanf determines that no
                                  other characters are to be assigned to the float.Since the conversion
                                  specification doesn't identify any formatting information for %f, five
                                  zeroes 0 are added after .3 to pad the decimals to the default six places.

   - Conversion specification %d: scanf reads the 4 and determines that it can be stored in an integer.
                                  scanf repeats the process with the next character read, which is 5.
                                  The next character, a decimal point, is read and scanf determines that
                                  the decimal point doesn't apply to the integer. scanf returns the decimal
                                  point to the input stream list. No other characters are read for %d.

   - Conversion specification %f: scanf reads the decimal point and determines that it can be put into the
                                  float. scanf reads the next character 6 and determines that floats can
                                  contain the number, so the 6 is put into the float. scanf determines that
                                  whitespace follows, which scanf ignores. scanf determines that no other
                                  characters are to be read into the %f. Because the conversion specification
                                  doesn't identify any formatting information for %f, the number .6 is prefixed
                                  with a 0 and five zeroes are added after the 6, which is how C stores floats by default.

   - Final Answer:
                    - x = 12.300000
                    - i = 45
                    - y = 0.600000

*/
