//PRIESTLEY FOMECHE
//DISPLAYS NUMBERS ENTERED BY USER IN A FOUR BY FOUR ARRANGEMENT
//6TH JANUARY 2022

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int one, two, three, four, five, six, seven, eight, nine,
    ten, eleven, twelve, thirteen, fourteen, fifteen, sixteen;

    printf("Enter the numbers from 1 to 16 in any order: ");
    scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d",
          &one, &two, &three, &four, &five, &six, &seven, &eight, &nine, &ten,
          &eleven, &twelve, &thirteen, &fourteen, &fifteen, &sixteen);

    printf("\n%d\t%d\t%d\t%d\n%d\t%d\t%d\t%d\n%d\t%d\t%d\t%d\n%d\t%d\t%d\t%d\n",
           one, two, three, four, five, six, seven, eight, nine, ten, eleven,
           twelve, thirteen, fourteen, fifteen, sixteen); //Displays numbers in a 4 x 4 arrangement

    printf("\nRow Sums: %d %d %d %d\n", one + two + three + four, five + six + seven + eight,
           nine + ten + eleven + twelve, thirteen + fourteen + fifteen + sixteen); //Sums up each row

    printf("Column Sums: %d %d %d %d\n", one + five + nine + thirteen, two + six + ten + fourteen,
           three + seven + eleven + fifteen, four + eight + twelve + sixteen); //Sums up each column

    printf("Diagonal Sums: %d %d\n", one + six + eleven + sixteen, four + seven + ten + thirteen); //Sums up each diagonal

    return 0;
}
