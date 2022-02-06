//PRIESTLEY FOMECHE
//CONVERTS NUMERICAL GRADE TO LETTER GRADE
//15TH JANUARY 2022

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int grade;

    printf("Enter numerical grade: ");
    scanf("%d", &grade);

    if (grade < 0 || grade > 100){
        printf("\nInvalid Grade!\n");
        return 0;
    }

    switch (grade / 10){
        case 9: case 10:
            printf("\nLetter Grade: A\n");
            break;

        case 8: printf("\nLetter Grade: B\n");
                break;

        case 7: printf("\nLetter Grade: C\n");
                break;

        case 6: printf("\nLetter Grade: D\n");
                break;

        case 5: case 4: case 3: case 2: case 1: case 0:
            printf("\nLetter Grade: F\n");
            break;
    }

    return 0;
}
