#include "main.h"

/**
*get_endianness - checks for endianness
*Return: void
*/
int get_endianness(void)
{
	int i;
	char *c;

	i = 1;
	c = (char *)&i;
	return (*c);
}
