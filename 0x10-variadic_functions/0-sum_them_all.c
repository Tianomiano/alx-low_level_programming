#include "variadic_functions.h"

/**
*sum_them_all - sum of all parameters
*@n: Number of parameters
*Return: int
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list sum_all;
	unsigned int i;
	int sum;

	va_start(sum_all, n);
	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(sum_all, int);
	}
	va_end(sum_all);
	return (sum);
}
