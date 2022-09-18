/* This code intentionally places a semicolon after
   the parentheses in a while statement.
   I want to observe what the compiled code does.
*/

#include <stdio.h>

int main(void)
{
    int i = 10;

    while (i > 0)
        ; // incorrectly placed semicolon. Infinite loop starts here.
    {
        printf("T minus %d and counting\n", i);
        --i;
    }
    return 0;
}