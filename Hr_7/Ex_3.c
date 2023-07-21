#include <stdio.h>

/**
 * main - Using a while loop
 * Return: Always 0.
 */

int main(void)
{
  int c;

  c = ' ';
  printf("Enter a character:\n(enter k to exit)\n");
  while (c != 'k')
    {
      c = getc(stdin);
      putchar(c);

    }
  printf("\nOut of the while loop. Bye!\n");

  return (0);
}
