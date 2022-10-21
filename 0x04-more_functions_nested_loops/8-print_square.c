#include "main.h"

/**
*print_square - prints a square
*@size: size of square
*Return: 0
*/

void print_square(int size)
{
	int i;
	int k;

	if (size <= 0)
	{
		_putchar('\n');
	}
	if (size > 0)
	{
		i = 0;
		while (i < size)
		{
			k = 0;
			while (k < size)
			{
				_putchar('#');
			k++;
			}
		_putchar('\n');
		i++;
		}
	}
}
