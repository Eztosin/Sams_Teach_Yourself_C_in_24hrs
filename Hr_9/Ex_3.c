/**
* write a program to  multiply two signed int variables with positive
* values, and display the result as a long int.
*/


#include <stdio.h>

int main()
{
int x, y;
long result;

x = 400;
y = 253;

 result = (long)x * y;

printf("The result as a long int is %ld\n", result);

return(0);
}
