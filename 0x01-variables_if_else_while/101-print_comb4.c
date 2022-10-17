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
		for (j = 48; j < 57; j++)
		{
			for (k = 48; k < 58; k++)
			{
				if (i != j && i != k && j != k)
				{
					putchar(i + 48);
					putchar(j + 48);
					putchar(k + 48);
					if (i + j + k < 24)
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
