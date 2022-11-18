#include "variadic_functions.h"
#include <stdio.h>

/**
*print_strings - prints strings
*@separator: separates char
*@n: chars passed
*Return: char
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list p_str;
	char *str;

	if (separator == NULL)
		separator = "";
	va_start(p_str, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(p_str, char *);
		if (str == NULL)
			str = "(nil)";
		printf("%s", str);
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(p_str);
}
