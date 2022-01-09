/*

C Programming: A Modern Approach (Second Edition)
Chapter 2, Exercise 1, Page 33

PRIESTLEY FOMECHE
5TH JANUARY 2022

Q: Create and run Kernighan and Ritchie's famous "hello, world" program:
   Do you get a warning message from the compiler? If so, what's needed to make it go away?

*/

#include <stdio.h>

int main(void)
{
    printf("hello, world\n");

    return 0;
}

/*

A:

- Compiling this program without line 20 and without the -Wall option does not return any compilation errors.

- Compiling this program without line 20 and with the -Wall option returns the following warnings:

     warning: control reaches end of non-void function [-Wreturn-type]

- Therefore in order not to get any warning messages, the program needs to be compiled with line 20 while using the -Wall option.

*/
