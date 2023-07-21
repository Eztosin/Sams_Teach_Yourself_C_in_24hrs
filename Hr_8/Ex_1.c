#include <stdio.h>

/**
* main - evaluates arithmetic operation on hex values.
* Return: Always 0.
*/

int main(void)
{
  int i, j;
  i = 0xEFFF;
  j = 0x1000;

    
printf("The negative binary value of 0xEFFF is 0x%X\n", ~i);
printf("The negative binary value of 0x1000 is 0x%X\n", ~j);

return (0);
}
