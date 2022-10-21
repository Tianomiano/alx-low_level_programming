#include "main.h"

/**
*print_most_numbers - prints 0-9 except 2 & 4
*Return: 0
*/

void print_most_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		while (i != 2 && i != 4)
		{
			_putchar(i + '0');
		}
		i++;
	}
	_putchar('\n');
}
