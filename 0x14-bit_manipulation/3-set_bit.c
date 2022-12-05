#include "main.h"

/**
*set_bit - sets bit to 1 at given index
*@n: pointer
*@index: bit to change to 1
*Return: 0 or -1
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	i = 1 << index;
	*n = *n | i;

	return (1);
}
