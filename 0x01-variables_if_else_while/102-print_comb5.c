#include <stdio.h>
#include <stdlib.h>

/**
*main - prints unique combinations of three digits
*Return: 0
*/

int main(void)
{
	int i, j, k, l;

	i = 48;
	j = i + 1;
	k = 48;
	l = k + 1;
	while (i < 58; i++)
	{
		while (j < 58; j++)
		{
			putchar(i);
			putchar(j);
			putchar(' ');
			while (k < 58 && k != i; k++)
			{
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
