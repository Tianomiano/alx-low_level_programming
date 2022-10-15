#include <stdio.h>
#include <stdlib.h>

/**
*main - alphabets in reverse
*Return: 0
*/

int main(void)
{
	char as;

	for (as = 'z'; as >= 'a'; as--)
	{
		putchar(as);
	}
	putchar('\n');
	return (0);
}
