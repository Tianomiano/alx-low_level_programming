#include "main.h"

/**
*main - prints program name
*@argc: number of arg
*@argv: string
*Return: 0
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
