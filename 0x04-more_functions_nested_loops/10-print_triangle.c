#include "main.h"

/**
*print_triangle - prints triangle
*@size: size of triangle
*Return: 0
*/

void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (i = 0; i <= size; i++)
	{
		for (j = size - i; j >= 1; j--)
		{
			_putchar(' ');
		}
		for (k = 1; k <= i; k++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
