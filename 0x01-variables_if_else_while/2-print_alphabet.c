#include <stdio.h>
/**
 *main - starting point
 *Description: prints alphabet
 *Return: 0
 */

int main (void)
{
	char a;
	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
