#include <stdio.h>

/**
 * main - reads character entered by user and prints ic to the screen.
 * Return: Always 0.
 */

int main(void)
{
  char ch;
  
  printf("Enter a character:  ");
  ch = getchar();
  
  printf("character entered is:  ");
  putchar(ch);
  putchar('\n');
  return(0);

}
