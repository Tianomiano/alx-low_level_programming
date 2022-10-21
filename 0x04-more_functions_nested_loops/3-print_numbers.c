#include "main.h"

/**
*print_numbers - prints numbers 0-9
*Return: 0
*/

void print_numbers(void)
{
	int l = 0;

	while (l <= 9)
	{
		_putchar(l);
		l++;
	}
	_putchar('\n');
}
