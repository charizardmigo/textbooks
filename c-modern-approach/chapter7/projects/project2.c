//PRIESTLEY FOMECHE
//PRINTS A TABLE OF SQUARES (Modified)
//22ND AUGUST 2022

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
   int i, n;
   char ch;

   printf("This program prints a table of squares.\n");
   printf("Enter number of entries in table: ");
   scanf("%d", &n);
   getchar(); //Discards new line character and number of entries after multiples of 24

   for (i = 1; i <= n; i++) {
      printf("%10d%10d\n", i, i * i);

      if (i % 24 == 0) {
        condition:
        printf("\nPress Enter to continue...");
        ch = getchar();

        if (ch != '\n') {
            printf("\nInvalid Input\n");
            getchar();
            goto condition;
        }
      }
   }

   return 0;
}
