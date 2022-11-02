#include "main.h"
#include <stdio.h>

/**
*print_diagsums - sum of two diagonals
*@a: int
*@size: size of a
*/

void print_diagsums(int *a, int size)
{
	int index, sum1 = 0, sum2 = 0;

	for (index = 0; index < size; index++)
	{
		sum1 += a[index];
		a += size;
	}

	a -= size;
	for (index = 0; index < size; index++)
	{
		sum += a[index];
		a -= size;
	}

	printf("%d, %d\n", sum1, sum2);
}
