#include <stdio.h>
/**
* main - entry point
*
* Description: print lowercase alphabet excluding e and q
* Return: 0
*/
int main(void)
{
char c;

for (c = 'a'; c <= 'z'; c++)
{
if (c == 'e')
	continue;
else if (c == 'q')
	continue;

putchar(c);
}

putchar('\n');

return (0);
}
