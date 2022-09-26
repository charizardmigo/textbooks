/*

C Programming: A Modern Approach (Second Edition)
Chapter 8, Exercise 5, Page 177

PRIESTLEY FOMECHE
27TH AUGUST 2022

Q:  The Fibonacci numbers are 0, 1, 1, 2, 3, 5, 8, 13, ..., where each number is the sum of the two preceding numbers.
    Write a program fragment that declares an array named fib_numbers of length 40 and fills the array with the first
    40 Fibonacci numbers. Hint: Fill in the first two numbers individually, then use a loop to compute the remaining
    numbers.


A:

    #include <stdio.h>
    #include <stdlib.h>
    #define LENGTH ((int) (sizeof(fib_numbers) / sizeof(fib_numbers[0])))

    int main(void)
    {
        int fib_numbers[40] = {0, 1};

        for (int i = 1; i < LENGTH; i++)
            fib_numbers[i+1] = fib_numbers[i] + fib_numbers[i-1];

        return 0;

    }

*/
