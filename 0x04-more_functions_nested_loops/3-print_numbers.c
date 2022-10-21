#include "main.h"

/**
*print_numbers - prints numbers 0-9
*Return: 0
*/

void print_numbers(void)
{
	int l;

	for (l >= '0'; l <= '9')
	{
		_putchar(l);
		l++;
	}
	_putchar('\n');
	return (0);
}
