#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success/correct)
*/
int main(void)

{
char alphabet;

for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
outchar(alphabet);
}

outchar('\n');

return (0);

}
