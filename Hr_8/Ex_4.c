#include <stdio.h>

/**
 * main - shows the value of given expressions in hexadecimal
 * Return: Always 0.
 */

int main(void)
{
  int x, y, z;
  x = 0xFFFF ^ 0x8888;
  y = 0xABCD & 0x4567;
  z = 0xDCBA | 0x1234;

  printf("The value of x is 0x%X\n", x);
  printf("The value of x is 0x%X\n", y);
  printf("The value of x is 0x%X\n", z);

  return (0);
}
