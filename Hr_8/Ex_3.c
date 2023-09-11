#include <stdio.h>

/**
 * main - Using the left and right shift bitwise operators.
 * Return: Always 0.
 */

int main(void)
{
  int x, y, result;
  x = 123;
  y = 4;

  result = x << y;
  printf("The result of x << y is %d\n", result);

  result = x >> y;
  printf("The result of x >> y is %d\n", result);

  return (0);
}
