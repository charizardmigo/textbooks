/*

C Programming: A Modern Approach (Second Edition)
Chapter 3, Exercise 3, Page 49

PRIESTLEY FOMECHE
6TH JANUARY 2022

Q: For each of the following pairs of scanf format strings, indicate whether or not the two strings are equivalent.
   If they're not, show how they can be distinguished.
   (a) "%d"         versus   " %d"
   (b) "%d-%d-%d"   versus   "%d -%d -%d"
   (c) "%f"         versus   "%f "
   (d) "%f,%f"      versus   "%f, %f"



A: I'll take %d = 2 and %f = 3.00 for demonstration purposes

   (a) "%d" versus " %d" (Equivalent)

        "%d"  = 2
        " %d" = 2

   (b) "%d-%d-%d" versus "%d -%d -%d" (Not Equivalent)

        "%d-%d-%d"   = 2-2-2
        "%d -%d -%d" = 2--630361344-32764

    Explanation: For the first call of scanf (%d-%d-%d), scanf searches for an integer value and matches it with the first %d,
                 then looks for the "-" character to match it with the first "-" in the format specifier and then searches for
                 the next integer to match with the second %d in the format specifier. If the user enters a space between the
                 first "-" and the second %d, scanf ignores this space. But for the second call of scanf (%d -%d -%d), the same
                 process takes place but if the user enters a space in between the first %d and the first "-", scanf terminates
                 and returns only the first integer because the space character doesn't match the "-" character.
                 Hence the other two %d are given arbitrary values.

    (c) "%f" versus "%f " (Not Equivalent)

        "%f"  = 3.00
        "%f " = 3.00 "ch"

        Explanation: In my understanding of the scanf function, putting a white space before or after any format specifier instructs
                     scanf to skip any white space character (could be the new-line, space or tab character) entered by the user.
                     The first call of scanf (%f) reads a floating point number and stores in whatever variable was assigned to it.
                     The second call of scanf (%f ) does same, but it doesn't terminate upon the user hitting the enter key until it
                     encounters any other random character or number. This is because the new-line character (entered by the user)
                     matches the white space in the scanf function hence scanf doesn't terminate immediately but waits till the user
                     enters a random input before terminating. The "ch" in the demonstration represents any random input. (You can write
                     a small code to try it out yourself).

    (d) "%f,%f" versus "%f, %f" (Equivalent)

        "%f,%f"   = 3.00
        "%f, %f"  = 3.00

*/
