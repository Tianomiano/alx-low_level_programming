#include "main.h"

/**
*binary_to_uint - converts binary to unsigned int
*@b: string input
*Return: converted number
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, power, value, sum;
	const char *s;

	s = b;
	while (*b != '\0')
	{
		b++;
	}
	b--;
	power = 0;
	sum = 0;
	while (b >= s)
	{
		i = *b - '0';
		value = i * (1 << power);
		sum += value;
		b--;
		power++;
	}
	return (sum);
}
