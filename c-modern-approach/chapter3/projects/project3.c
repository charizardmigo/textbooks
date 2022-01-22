//PRIESTLEY FOMECHE
//BREAKS DOWN AN ISBN ENTERED BY USER
//6TH JANUARY 2022

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int gs1Prefix, groupIdentifier, publisherCode, itemNum, checkDigit;

    printf("Enter an ISBN: ");
    scanf("%d-%d-%d-%d-%d", &gs1Prefix, &groupIdentifier, &publisherCode, &itemNum, &checkDigit);

    //Separates the ISBN into segments
    printf("\nGS1 Prefix: %d\n", gs1Prefix);
    printf("Group Identifier: %d\n", groupIdentifier);
    printf("Publisher Code: %d\n", publisherCode);
    printf("Item Number: %d\n", itemNum);
    printf("\Check Digit: %d\n", checkDigit);

    return 0;
}
