#include "main.h"
#include <stdio.h>
/**
*print_array - prints an array
*@a: array
*@n: number of elements
*/

void print_array(int *a, int n)
{
	int i;

	for (i = o; i < n; i++)
	{
		printf("%d", a[i];
		if (i != n - 1)
		{
			printf(", ");
		}
	printf("\n");
	}
}
