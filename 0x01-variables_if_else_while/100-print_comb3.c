#include <stdio.h>

/**
*main - combination of two digits
*Return: 0
*/

int main(void)
{
	int i;
	int j;

	for (i = 48; i < 58; i++)
	{
		for (j = 0; j < 58; j++)
		{
			if (i != j)
			{
				putchar('i+j');
			}
			if (i != 57 && j != 57)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
