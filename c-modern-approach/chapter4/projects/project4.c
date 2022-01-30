//PRIESTLEY FOMECHE
//READS AN INTEGER FROM USER AND DISPLAYS IT IN OCTAL
//10TH JANUARY 2022

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num1, num2, num3, num4, num5, rem1, rem2, rem3, rem4, rem5;

    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &num1);

    rem1 = num1 % 8; //Computes the 1st remainder
    num2 = num1 / 8; //Computes the 1st quotient
    rem2 = num2 % 8; //Computes the 2nd remainder
    num3 = num2 / 8; //Computes the 2nd quotient
    rem3 = num3 % 8; //Computes the 3rd remainder
    num4 = num3 / 8; //Computes the 3rd quotient
    rem4 = num4 % 8; //Computes the 4th remainder
    num5 = num4 / 8; //Computes the 4th quotient
    rem5 = num5 % 8; //Computes the 5th remainder

    printf("\nIn octal, your number is: %d%d%d%d%d\n", rem5, rem4, rem3, rem2, rem1);

    return 0;
}
