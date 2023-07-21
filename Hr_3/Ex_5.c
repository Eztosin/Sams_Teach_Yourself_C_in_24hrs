#include "main.h"

int mul(int x, int y);
/**
 * main - multiplies two integers.
 * Return: always 0.
 */

int main(void)
{
  int i = 3, j = 5, k;

  k = mul(i, j);
  printf("The multiplication of the numbers is %d\n", k);
  return (0);
}

int mul(int x, int y)
{
  return (x * y);
}
