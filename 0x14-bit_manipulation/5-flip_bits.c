#include "main.h"

/**
*flip_bits - num of bits needed to flip from
*one num to another
*@n: first number
*@m: second number
*Return: num of bits
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff, res;
	unsigned int i, j;

	j = 0;
	res = 1;
	diff = n ^ m;
	for (i = 0; i < (sizeof(unsigned long int)) * 8; i++)
	{
		if (res == (diff & res))
			j++;
		res <<= 1;
	}
	return (j);
}
