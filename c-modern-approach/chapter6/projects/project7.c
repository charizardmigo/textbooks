//PRIESTLEY FOMECHE
//PRINTS A TABLE OF SQUARES USING AN ODD METHOD
//3RD FEBRUARY 2022

#include <stdio.h>
#include <stdlib.h>

int main(void)    
{
    int i, n, odd, square;

    printf("This program prints a table of squares. \n");
    printf("\nEnter number of entries in table: ");
    scanf("%d", &n);
    printf("\n");

    //i = 1; Line from Original square3.c program
    odd = 3;

    for (i = 1, square = 1; i <= n; odd += 2, ++i) {
        printf("%10d%10d\n", i, square);
        //++i;  Line from Original square3.c program
        square += odd;
    }
    return 0;
}
