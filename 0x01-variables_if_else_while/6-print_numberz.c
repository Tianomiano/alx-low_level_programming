#include <stdio.h>
#include <stdlib.h>

/**
*main - prints all single digits to the base 10
*Return: 0
*/

int main(void)
{
	int single;

	for (single = 0; single < 10; single++)
	{
		putchar((single % 10) + '0');
	}
	putchar('\n');
	return (0);
}
