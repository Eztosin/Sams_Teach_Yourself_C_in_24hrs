#include <stdio.h>

/**
* main - prints the result of expressions.
* Return: Always 0.
*/

int main(void)
{
int x, y;

x = 1;
y = 3;

printf("The value of x is %d\n", x);
printf("The value of y is %d\n", y);

x = 1;
y = 3;
x += y;
printf("After x+= y value of x is now %d\n", x);

x = 1;
y = 3;
x += -y;
printf("After x += -y, value of x is now %d\n", x);

x = 1;
y = 3;
x -= y;
printf("After x += -y, value of x is now %d\n", x);

x = 1;
y = 3;
x -= -y;
printf("After x -= -y, value of x is now %d\n", x);

x = 1;
y = 3;
x *= y;
printf("After x *= y, value of x is now %d\n", x);

x = 1;
y = 3;
x *= -y;
printf("After x *= -y, value of x is now %d\n", x);

return (0);

}
