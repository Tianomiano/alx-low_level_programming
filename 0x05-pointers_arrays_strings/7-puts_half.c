#include "main.h"

/**
*puts_half - prints half a string
*@str: string
*/

void puts_half(char *str)
{
	int i = 0;

	while (*str != '\0')
	{
		str++;
		i++;
	}
	str -= (i / 2);
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
