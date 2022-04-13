#include "main.h"
/**
* _isalpha - checks for alphabetic character
* @c: takes in a character
* print_sign - prints the sign of a number
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
