/**
* write a program to measure the sizes of short int, long int, and
* long double on your machine
*/


#include <stdio.h>

int main()
{
printf("The size of short int is %zu\n", sizeof(short));
printf("The size of long int is %zu\n", sizeof(long));
printf("The size of long double is %zu\n", sizeof(long double));

return(0);
}
