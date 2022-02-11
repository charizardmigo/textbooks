//PRIESTLEY FOMECHE
//FINDS THE GREATEST COMMON DIVISOR OF TWO INTEGERS (EUCLID'S ALGORITHM)
//26TH JANUARY 2022

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int m, n, rem;

    printf("Enter two integers: ");
    scanf("%d%d", &m, &n);

    while (n) {
        rem = m % n;
        m = n;
        n = rem;
    }

    printf("\nGreatest common divisor: %d\n", m);

    return 0;
}
