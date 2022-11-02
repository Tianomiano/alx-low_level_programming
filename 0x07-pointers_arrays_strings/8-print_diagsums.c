#include "main.h"
#include <stdio.h>

/**
*print_diagsums - sum of two diagonals
*@a: int
*@size: size of a
*/

void print_diagsums(int *a, int size)
{
	int in;
	int sum1 = 0;
	int sum2 = 0;

	for (in = 0; in < size; in++)
	{
		sum1 += a[size];
		a += size;
	}
	a -= size;
	for (in = 0; in < size; in++)
	{
		sum += a[size];
		a -= size;
	}
	printf("%d, %d\n", sum1, sum2);
}
