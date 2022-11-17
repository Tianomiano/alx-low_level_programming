#include "function_pointers.h"

/**
*int_index - returns index
*@array: array
*@cmp: pointer to func that compares values
*@size: number of elements in array
*Return: 0,1 or -1
*
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}
	else
	{
		if (array != NULL && cmp != NULL)
		{
			i = 0;
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);
				i++;
			}
		}
	}
	return (-1);
}
