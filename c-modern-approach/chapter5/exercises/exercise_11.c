/*

C Programming: A Modern Approach (Second Edition)
Chapter 5, Exercise 11, Page 95

PRIESTLEY FOMECHE
14TH JANUARY 2022

Q: The following table shows telephone area codes in the state of Georgia along with the largest city in each area:
   Area code             Major city
      229                  Albany
      404                  Atlanta
      470                  Atlanta
      478                  Macon
      678                  Atlanta
      706                  Columbus
      762                  Columbus
      770                  Atlanta
      912                  Savannah

  Write a switch statement whose controlling expression is the variable area code. If the value of area code is in the table,
  the switch statement will print the corresponding city name. Otherwise, the switch statement will display the message "Area
  code not recognized", Use the techniques discussed in Seetion 5.3 to make the switch statement as simple as possible.


A:
    switch (area_code){
        case 404: case 470: case 678: case 770:
            printf("Atlanta");
            break;

        case 706: case 762:
            printf("Columbus");
            break;

        case 229: printf("Albany");
                  break;

        case 478: printf("Macon");
                  break;

        case 912: printf("Savannah");

        default: printf("Area code not recognized");
                 break;
    }

*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    return 0;
}
