#include <stdlib.h>
#include <stdio.h>

/**
*p_op - prints opcode
*@a: address of main func
*@n: no of bytes to print
*Return: void
*/

void p_op(char *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
	}
	printf("\n");
}
/**
* main - prints the opcodes
* @argc: number of arguments
* @argv: array of pointers
* Return: O
*/
int main(int argc, char **argv)
{
	int j;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	j = atoi(argv[1]);
	if (j < 0)
	{
		printf("Error\n");
		exit(2);
	}
	p_op((char *)&main, j);
	return (0);
}
