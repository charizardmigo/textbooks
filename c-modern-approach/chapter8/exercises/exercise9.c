/*

C Programming: A Modern Approach (Second Edition)
Chapter 8, Exercise 10, Page 178

PRIESTLEY FOMECHE
27TH AUGUST 2022

Q:  Write a declaration for an 8 x 8 char array named chess_board.
    Include an initializer that puts the following data into the array (one character per array element):


A:
    #define SIZE 8

    char chess_board[SIZE][SIZE] = {{'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
                                    {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
                                    {' ', '.', ' ', '.', ' ', '.', ' ', '.'},
                                    {'.', ' ', '.', ' ', '.', ' ', '.', ' '},
                                    {' ', '.', ' ', '.', ' ', '.', ' ', '.'},
                                    {'.', ' ', '.', ' ', '.', ' ', '.', ' '},
                                    {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
                                    {'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'}};