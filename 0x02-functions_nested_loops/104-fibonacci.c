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
		printf("j");
		printf("k");
		l = j + k;
		printf("%lu", l);
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
