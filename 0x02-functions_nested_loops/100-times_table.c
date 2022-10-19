#include "main.h"

/**
*print_times_table - prints the n timetable
*@n: number less than or equal to 15
*Retuen: 0
*/

void print_times_table(int n)
{
	int a;
	int b;
	int c;

	for (n = 0; n <= 15; n++)
	{
		for (a = 0; a <= n; a++)
		{
			_putchar('0');
			for (b = 1; b <= n; b++)
			{
				_putchar(',');
				_putchar(' ');
				c = a * b;
				if (c <= 99)
				{
					_putchar(' ');
				}
				if (c <= 9)
				{
					_putchar(' ');
				}
				if (c >= 100)
				{
					_putchar((c / 100) + '0');
					_putchar((c % 100) + '0');
				}
				else if (c <= 99 && c >= 10)
				{
					_putchar(c / 10 + '0');
				_putchar(c % 10 + '0');
				}
			}
			_putchar('\n');
		}
	}
}
