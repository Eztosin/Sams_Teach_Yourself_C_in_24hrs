#include <stdio.h>

/**
 * main - using a while and do-while loop.
 * Return: always 0.
 */

int main(void)
{
  int i, j;

  i = 1;
  

  while (i <= 3)
    {
      printf("The start of iteration %d of the outer loop.\n", i);
      j = 1;
      do
	{
	  printf("      Iteration %d of the inner loop.\n", j);
	  j++;	  
	} while (j <= 4);

      printf("The end of iteration %d of the outer loop.\n", i);
      ++i;
    }

  return (0);
}
