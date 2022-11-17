#include "function_pointers.h"

/**
*array_iterator - executes a function
*@array: array
*@size: size of array
*@action: pointer to needed func
*Return: void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		i = 0;
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
