#include <stdio.h>
/**
* main - Entry point
*
*Return: Always 0 (Success/correct)
*/
int main(void)

{
int c;

for (c = 48; c <= 57; c++)
{
putchar(c);

if (c == 57)
{
break;
}

putchar(',');
putchar(' ');
}

putchar('\n');

return (0);

}
