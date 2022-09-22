/* This explores what a C program will do if an
   array subscript goes out of bounds.
   I expect to see the program run in a continuous loop.

   Actual result: The program loops 20 times and displays
   a Segmentation Fault message.
*/

#include <stdio.h>

int main(void)
{
    int a[10], i;

    for (i = 1; i <= 20; i++)
    {
        a[i] = i;
        printf("%d\n", a[i]);
    }

    return 0;
}