#include "variadic_functions.h"
#include <stdio.h>

/**
*print_numbers - prints numbers
*@separator: separates numbers
*@n: number of integers
*Return: 0
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list print_num;

	va_start(print_num, n);
	if (separator == NULL)
	{
		separator = "";
	}
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(print_num, int));
		if (i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(print_num);
}
