#include "main.h"

/**
*print_line - prints straight line
*@n:  number of times the character _ should be printed
*Retutn: 0
*/

void print_line(int n)
{
	int m;

	if (n > 0)
	{
		for (m = 0; m < n; m++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
