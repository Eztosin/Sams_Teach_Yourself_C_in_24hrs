#include <stdio.h>

/**
*
*
*/

int main(void)
{
char ch;

printf("Enter a character\n(Enter q to exit)\n");
for (ch = ' '; ch != 'q' ? 1 : 0;)
{
ch = getchar();
putchar(ch);
}

printf("Out of the loop, Bye!\n");
return (0);

}
