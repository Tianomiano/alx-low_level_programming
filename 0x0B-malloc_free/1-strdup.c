#include "main.h"

/**
*_strdup - returns pointer to allocated space
*@str: string
*Return: 0  or 1
*/

char *_strdup(char *str)
{
	char *ptr;
	int i;
	int j = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[j] != '\0')
	{
		j++;
	}
	ptr = (char *)malloc((sizeof(char) * j) + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < j; i++)
	{
		ptr[i] = str[i];
	ptr[j] = '\0';
	}
	return (ptr);
}
