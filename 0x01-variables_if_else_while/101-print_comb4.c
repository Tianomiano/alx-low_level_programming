#include <stdio.h>
#include <stdlib.h>

/**
*main - prints unique combinations of three digits
*Return: 0
*/

int main(void)
{
	int i, j, k;

	for (i = 48; i < 56; i++)
	{
		for (j = i + 1; j < 57; j++)
		{
			for (k = j + 1; k < 58; k++)
			{
				if (i != j && i != k && j != k)
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if (i < 56 && j < 56 && k < 58)
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
