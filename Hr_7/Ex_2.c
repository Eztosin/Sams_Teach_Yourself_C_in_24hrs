#include <stdio.h>

/**
 * main - contains pieces of code from Ex_1.
 * Return: Always 0.
 */

int main(void)
{
  int i, j;
  for (i = 0, j = 1; i < 8; i++, j++)
    printf("%d + %d = %d\n", i, j, i + j);

  putchar('\n');
  
  for (i = 0, j = 1; i < 8; i++, j++);
  printf("%d + %d = %d\n", i, j, i + j);

  return (0);
}
