/*

C Programming: A Modern Approach (Second Edition)
Chapter 8, Exercise 11, Page 178

PRIESTLEY FOMECHE
27TH AUGUST 2022

Q:  Write a program fragment that declares an 8 x 8 char array named checker_board and then
    uses a loop to store the following data into the array (one character per array element):

    B R B R B R B R
    R B R B R B R B
    B R B R B R B R
    R B R B R B R B
    B R B R B R B R
    R B R B R B R B
    B R B R B R B R
    R B R B R B R B

    Hint: The element in row i, column j, should be the letter B if i + j is an even number.


A:
    #include <stdio.h>
    #include <stdlib.h>
    #define SIZE 8

    int main(void)
    {
        char checker_board[SIZE][SIZE];

        for (int i = 0; i < SIZE; i++) {
            for (int j = 0; j < SIZE; j++) {
                if ((i + j) % 2 == 0)
                    printf("B ");
                else
                    printf("R ");
            }
             printf("\n");
        }
        return 0;
    }

*/