#include "main.h"

/**
* print_line - prints underscores
*
* @n: limit
* Return: 0
*/
void print_line(int n)
{
int i;
if (n > 0)
{
for (i = 0; i < n; i++)
{
_putchar(',');
}
}
_putchar('\n');
}
