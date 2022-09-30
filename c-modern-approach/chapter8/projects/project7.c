// PRIESTLEY FOMECHE
// PRINTS ROW SUM AND COLUMN SUM OF A 5 X 5 INTEGER ARRAY
// 6TH SEPTEMBER 2022

#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int main(void)
{
    int myArray[SIZE][SIZE], i, j, k, rowSum, colSum;

    printf("THIS PROGRAM READS A 5 X 5 ARRAY OF INTEGERS\n\n");

    for (i = 0, k = 1; i < SIZE; i++)
    {
        printf("Enter row %d: ", k++);

        for (j = 0; j < SIZE; j++)
            scanf("%d", &myArray[i][j]);
    }

    printf("\nRow totals: ");

    for (i = 0; i < SIZE; i++)
    {
        for (j = 0; j < SIZE; j++)
            rowSum += myArray[i][j];

        printf("%d ", rowSum);
        rowSum = 0;
    }

    printf("\nColumn totals: ");

    for (j = 0; j < SIZE; j++)
    {
        for (i = 0; i < SIZE; i++)
            colSum += myArray[i][j];

        printf("%d ", colSum);
        colSum = 0;
    }

    printf("\n");

    return 0;
}