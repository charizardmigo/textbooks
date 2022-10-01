// PRIESTLEY FOMECHE
// COMPUTES GRADES FOR STUDENTS AND QUIZES
// 6TH SEPTEMBER 2022

#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int main(void)
{
    int myArray[SIZE][SIZE], student, quiz, k, totStudent = 0, totQuiz = 0, max = 0, min = 100;

    printf("THIS PROGRAM READS A 5 X 5 ARRAY OF STUDENTS AND QUIZES\n\n");

    for (student = 0, k = 1; student < SIZE; student++)
    {
        printf("Enter Quiz Grades for Student %d: ", k++);

        for (quiz = 0; quiz < SIZE; quiz++)
            scanf("%d", &myArray[student][quiz]);
    }

    printf("\n---------------------------------------------\n");

    for (student = 0, k = 1; student < SIZE; student++, k++)
    {
        printf("\nStudent %d:\n", k);

        for (quiz = 0; quiz < SIZE; quiz++)
            totStudent += myArray[student][quiz];

        printf("Total Score: %d,\tAverage Score: %.2lf\n", totStudent, (double)totStudent / (double)SIZE);
        totStudent = 0;
    }

    printf("\n---------------------------------------------\n");

    for (quiz = 0, k = 1; quiz < SIZE; quiz++, k++)
    {
        for (student = 0; student < SIZE; student++)
            totQuiz += myArray[student][quiz];

        printf("\nAverage Score for Quiz %d: %.2lf\n", k, (double)totQuiz / (double)SIZE);
        totQuiz = 0;
    }

    printf("\n---------------------------------------------\n");

    for (quiz = 0, k = 1; quiz < SIZE; quiz++, k++)
    {
        for (student = 0; student < SIZE; student++)
        {
            if (myArray[student][quiz] > max)
                max = myArray[student][quiz];

            if (myArray[student][quiz] < min)
                min = myArray[student][quiz];
        }

        printf("\nHigh Score for Quiz %d: %d,\tLow score for Quiz %d: %d\n", k, max, k, min);
    }

    printf("\n---------------------------------------------\n");

    return 0;
}