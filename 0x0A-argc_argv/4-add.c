#include "main.h"

/**
*main - adds numbers
*@argc: count
*@argv: arguments
*Return: 0 or 1
*/

int main(int argc, char *argv[])
{
	int i, j, sum = 0;
	char *k;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; argv[i]; i++)
	{
		j = strtol(argv[i], &k, 10);
		if (*k)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += j;
		}
	}
	printf("%d\n", sum);
	return (0);
}
