//PRIESTLEY FOMECHE
//FINDS LARGEST AND SMALLEST NUMBERS AMONG 4 INTEGERS
//15TH JANUARY 2022

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num1, num2, num3, num4, large1, large2, small1, small2, largest, smallest;

    printf("Enter four integers: ");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

    //This 1st if statement block compares the 1st and 2nd number
    if (num1 > num2){
        large1 = num1;
        small1 = num2;
    }
    else {
        large1 = num2;
        small1 = num1;
    }

    //This 2nd if statement block compares the 3rd and 4th number
    if (num3 > num4){
        large2 = num3;
        small2 = num4;
    }
    else {
        large2 = num4;
        small2 = num3;
    }

    //This 3rd if statement block compares the result of 1st and 2nd if statement block
    //and assigns the largest number among them to the 'largest' variable
    if (large1 > large2)
        largest = large1;
    else
        largest = large2;

    //This 3rd if statement block compares the result of 1st and 2nd if statement block
    //and assigns the smallest number among them to the 'smallest' variable
    if (small1 > small2)
        smallest = small2;
    else
        smallest = small1;

    printf("\nLargest: %d\n", largest);
    printf("Smallest: %d\n", smallest);

    return 0;
}
