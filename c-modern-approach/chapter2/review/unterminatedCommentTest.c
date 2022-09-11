// Code to test if gcc will fail to compile a program
// that contains an unterminated comment. Expectation
// is that gcc will not compile the code.

#include <stdio.h>

int main(void)
{

   /* This is an unterminated comment
   printf("Ideally, gcc should have failed compiling this program\n");
   return 0;
}