/*

C Programming: A Modern Approach (Second Edition)
Chapter 3, Exercise 6, Page 49

PRIESTLEY FOMECHE
6TH JANUARY 2022

Q: Show how to modify the addfrac .c program of Section 3.2 so that the user is allowed to
   enter fractions that contain spaces before and after each / character.

*/

#include <stdio.h>

int main(void)
{
  int num1, denom1, num2, denom2, result_num, result_denom;

  printf("Enter first fraction: ");
  scanf("%d / %d", &num1, &denom1);

  printf("Enter second fraction: ");
  scanf("%d / %d", &num2, &denom2);

  result_num = num1 * denom2 + num2 * denom1;
  result_denom = denom1 * denom2;

  printf("\nThe sum is %d/%d\n", result_num, result_denom);

  return 0;
}
