#include <stdio.h>
#include <stdlib.h>

/**
*main - numbers to base 16
*Return: 0
*/

int main(void)
{
	int i;
	char c;

	for (i = 0; i < 10; i++)
	{
		putchar(i);
	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
