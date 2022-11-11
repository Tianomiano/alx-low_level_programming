#include "main.h"

/**
*_calloc - allocates memory for an array
*@nmemb: number of elements
*@size: sizeof
*Return: pointer to alloc mem
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *c;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	c = malloc(nmemb * size);
	if (c == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (nmemb * size); i++)
	{
		c[i] = 0;
	}
	return (c);
}
