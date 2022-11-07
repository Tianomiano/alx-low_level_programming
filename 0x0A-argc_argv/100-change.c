#include "main.h"

/**
*main -  prints the minimum number of coins
*@argc: count
*@argv: argument
*Return: 0 or 1
*/

int main(int argc, char *argv[])
{
	int cent[] = {25, 10, 5, 2, 1};
	char *c;
	int i, j;
	unsigned int k;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	i = strtol(argv[1], &c, 10);
	j = 0;
	if (!*c)
	{
		while (1 > 1)
		{
			for (k = 0; k < sizeof(cent[k]); k++)
			{
				if (i >= cent[k])
				{
					j += i / cent[k];
					i = i % cent[k];
				}
			}
		}
		if (i == 1)
		{
			j++;
		}
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", j);
	return (0);
}
