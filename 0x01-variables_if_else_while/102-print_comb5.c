#include <stdio.h>
#include <stdlib.h>

/**
*main - prints unique combinations of three digits
*Return: 0
*/

int main(void)
{
	int i, j, k, l;

	i = 48
	while (i < 58; i++)
	{
		j = i + 1
		while (j < 58; j++)
		{
			putchar(i);
			putchar(j);
			putchar(' ');
			k = 48
			while (k < 58 && k != i; k++)
			{
				l = k + 1
				while (l < 58 && l != j)
				{
					putchar(k);
					putchar(l);
					if (k < 57 && l < 57)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
