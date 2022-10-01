// PRIESTLEY FOMECHE
// GENERATES A RANDOM WALK ACROSS A 10 X 10 ARRAY
// 14TH SEPTEMBER 2022

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

int main(void)
{
    int row = 0, col = 0, up = 0, down = 0, left = 0, right = 0, move = 0;
    char letter = 'A', matrix[SIZE][SIZE] = {0};

    srand((unsigned)time(NULL));

    matrix[row][col] = letter++;

    // Assigns directions while checking boundaries
    while (letter <= 'Z')
    {
        up = down = left = right = move = 0;

        if (col + 1 < SIZE && matrix[row][col + 1] == 0)
            up = 1;

        if (col - 1 >= 0 && matrix[row][col - 1] == 0)
            down = 1;

        if (row + 1 < SIZE && matrix[row + 1][col] == 0)
            right = 1;

        if (row - 1 >= 0 && matrix[row - 1][col] == 0)
            left = 1;

        if (up + down + left + right == 0)
            break;

        move = rand() % 4;

        // Intentional fall-through if direction fails
        switch (move)
        {
        case 0:
            if (up)
                matrix[row][++col] = letter++;
            break;

        case 1:
            if (down)
                matrix[row][--col] = letter++;
            break;

        case 2:
            if (right)
                matrix[++row][col] = letter++;
            break;

        case 3:
            if (left)
                matrix[--row][col] = letter++;
            break;

        default:
            break;
        }
    }

    // Prints 10 x 10 matrix
    for (row = 0; row < SIZE; row++)
    {
        for (col = 0; col < SIZE; col++)
        {
            if (matrix[row][col] == 0)
                matrix[row][col] = '.';

            printf("%c ", matrix[row][col]);
        }

        printf("\n");
    }

    if (up + down + left + right)
        printf("\nCompleted A through Z\n");

    else
        printf("\nPremature termination\n");

    return 0;
}