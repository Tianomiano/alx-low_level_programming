#include <stdio.h>

/**
*main - prints fibbonacci
*Return: 0
*/

int main(void)
{
	int i;
	unsigned long j = 1;
	unsigned long k = 2;
	unsigned long l;

	for (i = 0; i < 98; i++)
	{
		l = j + k;
		printf("%lu, %lu, %lu", j, k, l);
		j = k;
		k = l;
		if (i == 97)
		{
			printf("\n");
		}
		else
		{
			printf(", ");
		}
	}
	return (0);
}
