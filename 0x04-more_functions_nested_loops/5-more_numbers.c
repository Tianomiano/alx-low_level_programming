#include "main.h"

/**
*more_numbers - prints 0-14 10 times
*Return: 0
*/

void more_numbers(void)
{
	int i;
	int j;

	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j <= 14)
		{
			_putchar(j + '0');
		}
		j++;
	_putchar('\n');
	i++;
	}
	_putchar('\n');
}
