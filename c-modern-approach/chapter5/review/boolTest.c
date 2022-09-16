/* Wondering what is printed when a _Bool integer type is
   assigned a value other than 0 or 1.
   Book states that a _Bool integer will get value of 1 if
   any non-zero integer is assigned to it.
*/

#include <stdio.h>

int main(void)
{
    _Bool flag; // flag must be assigned a value or boolTest.c won't compile.

    flag = 0;
    printf("Value of _Bool flag after assigning 0 to it: %d\n", flag);

    flag = 48;
    printf("Value of _Bool flag after assigning 48 to it: %d\n", flag);

    flag = -48;
    printf("Value of _Bool flag after assigned -48 to it: %d\n", flag);

    return 0;
}