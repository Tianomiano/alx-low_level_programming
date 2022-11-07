#include "main.h"

/**
*main - multiplies two numbers
*@argc: number of arguments
*@argv: arguments
*Return: 0 or 1
*/

int main(int argc, char *argv[])
{
	int i, mul;

	if (argc > 2)
	{
		for (i = 1; i < argc; i++)
		{
			mul = atoi(argv[1]) * atoi(argv[2]);
		}
		printf("%d\n", mul);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
