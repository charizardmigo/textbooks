//PRIESTLEY FOMECHE
//EVALUATES AN EXPRESSION
//23RD AUGUST 2022

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float num1, num2;
    char ch;

    printf("Enter an Expression: ");
    scanf("%f ", &num1);

    while ((ch = getchar()) != '\n') {
        scanf("%f", &num2);

        if (ch == '+')
            num1 += num2;

        else if (ch == '-')
            num1 -= num2;

        else if (ch == '*')
            num1 *= num2;

        else if (ch == '/')
            num1 /= num2;
    }

    printf("\nValue of Expression: %.2f\n", num1);

    return 0;
}
