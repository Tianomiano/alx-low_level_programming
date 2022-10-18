#include "main.h"

/**
*times_table - prints timetable of 9
*Return: 0
*/

void times_table(void)
{
	int a;
	int b;
	int mult;

	for (a = 0; a < 10; a++)
	{
		_putchar('0');
		for (b = 1; b < 10; b++)
		{
			_putchar(',');
			_putchar(' ');
			mult = a * b;
			if (mult <= 9)
			{
				_putchar(' ');
			}
			else
				_putchar(mult / 10 + '0');
				_putchar(mult % 10 + '0');
		}
	}
}
