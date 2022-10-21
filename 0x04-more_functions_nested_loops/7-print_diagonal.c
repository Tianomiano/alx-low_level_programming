#include "main.h"

/**
*print_diagonal - prints diagonal lines
*@n: is the number of times the character \ should be printed
*Return: 0
*/

void print_diagonal(int n)
{
	int m;
	int o;

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (m = 0; m <= n; m++)
	{
		for (o = 0; o < m; o++)
			_putchar(' ')
		_putchar('\\');
		_putchar('\n');
	}
}
