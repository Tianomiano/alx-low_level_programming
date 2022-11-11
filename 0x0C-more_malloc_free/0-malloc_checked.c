#include "main.h"

/**
*malloc_checked - allocates memory using malloc
*@b: allocated memory
*Return: pointer to memory
*/

void *malloc_checked(unsigned int b)
{
	unsigned int *allo

	allo = malloc(b);
	if (allo == NULL)
	{
		exit(98);
	}
	return (allo);
}
