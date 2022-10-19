#include "main.h"

/**
*print_times_table - prints the n timetable
*@n: number less than or equal to 15
*Retuen: 0
*/

void print_times_table(int n)
{
	int m;

	for (n = 0; n <= 15; n++)
	{
		_putchar('0');
		for (n = 1; n <= 15; n++)
		{
			_putchar(',');
			_putchar(' ');
			m = n * n;
			if (m <= 99)
			{
				_putchar(' ');
			}
			if (m <= 9)
			{
				_putchar(' ');
			}
			if (m >= 100)
			{
				_putchar((m / 100) + '0');
				_putchar((m % 100) + '0');
			}
			else if (m <= 99 && m >= 10)
			{
				_putchar(m / 10 + '0');
			_putchar(m % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
