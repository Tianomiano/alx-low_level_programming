#include "main.h"

/**
*main - prints no of arg passed
*@argc: number of arg
*@argv: arguments
*Return: 0
*/

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
