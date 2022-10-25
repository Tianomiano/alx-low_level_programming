#include "main.h"

/**
*puts2 - prints char in a str
*@str: string
*/

void puts2(char *str)
{
	int i = 0;

	while (*str[i] != 0; i++)
	{
		if ((i % 2) == 0)
		{
			_putchar(str[i]);
		}
		else
			continue;
	}
	_putchar('\n');
}
