#include "main.h"

/**
*str_concat - concatenates two strings
*@s1: first string
*@s2: second string
*Return: char
*/

char *str_concat(char *s1, char *s2)
{
	int i, j, m;
	char *res;

	if (s1 != NULL)
	{
		i = 0;
		while (s1[i] != '\0')
		{
			i++;
		}
	}
	if (s2 != NULL)
	{
		j = 0;
		while (s2[j] != '\0')
		{
			j++;
		}
	}
	m = i + j;
	res = (char *)malloc(sizeof(char) * (m + 1));
	if (res == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		res[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		res[i] = s2[j];
		i++;

	res[m] = '\0';
	}
	return (res);
}
