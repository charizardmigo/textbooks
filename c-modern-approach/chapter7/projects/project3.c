//PRIESTLEY FOMECHE
//SUMS A SERIES OF DOUBLES
//22ND AUGUST 2022

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
   double n, sum = 0;

   printf("This program sums a series of doubles.\n");
   printf("Enter doubles (0 to terminate): ");

   scanf("%lf", &n);

   while (n != 0) {
      sum += n;
      scanf("%lf", &n);
   }

   printf("\nThe sum is: %lf\n", sum);

   return 0;
}
