//PRIESTLEY FOMECHE
//PRINTS ALL EVEN SQUARES BETWEEN 1 AND N
//26TH JANUARY 2022

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num;

    printf("Enter limit on maximum sqaure: ");
    scanf("%d", &num);
    printf("\n");

    for (int i = 2; i * i <= num; i += 2) {
        printf("%d\n", i * i);
    }

    return 0;
}
