#include "main.h"

/**
*malloc_checked - allocates memory using malloc
*@b: allocated memory
*Return: pointer to memory
*/

void *malloc_checked(unsigned int b)
{
	unsigned int *all;

	all = malloc(b);
	if (all == NULL)
	{
		exit(98);
	}
	return (all);
}
