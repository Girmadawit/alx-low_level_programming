#include "main.h"
/**
  * print_sign - prints the sign of a number.
* @c: takes in a character
* Return: 1 if the number is greater than zero, 0 if zero and -1 otherwise
*/
int print_sign(int c)
{
if (c > 0)
{
_putchar('+');
return (1);
}
else if (c == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
