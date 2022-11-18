#include "variadic_functions.h"
#include <stdio.h>

/**
*print_all - prints anything
*@format: arg passed
*Return: void
*/

void print_all(const char * const format, ...)
{
	int i;
	int flag;
	char *str;
	va_list p_all;

	va_start(p_all, format);
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(p_all, int));
				flag = 0;
				break;
			case 'i':
				printf("%i", va_arg(p_all, int));
				flag = 0;
				break;
			case 'f':
				printf("%f", va_arg(p_all, double));
				flag = 0;
				break;
			case 's':
				str = va_arg(p_all, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				flag = 0;
				break;
			default:
				flag = 1;
				break;
		}
		if (format[i + 1] != '\0' && flag == 0)
			printf(", ");
	}
	printf("\n");
	va_end(p_all);
}
