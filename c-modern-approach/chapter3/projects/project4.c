//PRIESTLEY FOMECHE
//CHANGES TELEPHONE NUMBER FORMAT FROM USER
//6TH JANUARY 2022

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int areaCode, prefix, number;

    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    scanf("(%d) %d-%d", &areaCode, &prefix, &number);

    printf("\nYou entered %d.%d.%d\n", areaCode, prefix, number);

    return 0;
}
