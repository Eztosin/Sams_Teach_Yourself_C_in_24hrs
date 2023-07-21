#include <stdio.h>

/**
 * main - initializes an integer variable and increments by one
 * Return: always 0.
 */

int main(void)
{
  int x = 1;

  printf("x = x++ produces: %d\n", x = x++);
  printf("Now x contains: %d\n", x);

  return (0);
}
