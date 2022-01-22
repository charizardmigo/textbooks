//PRIESTLEY FOMECHE
//FORMATS PRODUCT INFORMATION ENTERED BY USER
//6TH JANUARY 2022

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int itemNum, day, month, year;
    float unitPrice;

    printf("Enter item number: ");
    scanf("%d", &itemNum);
    printf("Enter unit price: ");
    scanf("%f", &unitPrice);
    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("\nItem\t\tUnit Price\t\tPurchase Date\n%d\t\t%.2f\t\t\t%.2d/%.2d/%d\n", itemNum, unitPrice, month, day, year); //Tabularizes information from user

    return 0;
}
