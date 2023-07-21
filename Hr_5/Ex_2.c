#include <stdio.h>

/**
 * main - aligns numbers at the left edge of the field.
 * Return: 0.
 */

int main(void)
{
  int x = 123;
  double y = 123.456;

  printf("Left precision of the number is %-3d\n", x);
  printf("Left precision of the number is %-6.3f\n", y);

  return(0);
}
  
