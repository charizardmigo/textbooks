/* This code intentionally places a semicolon after
   the parentheses in an if statement.
   I want to observe what the compiled code does.
*/

#include <stdio.h>

int main(void)
{
    int d = 1;

    if (d == 0)
        ; // incorrectly placed semicolon
    printf("The value of d is %d\n", d);

    return 0;
}