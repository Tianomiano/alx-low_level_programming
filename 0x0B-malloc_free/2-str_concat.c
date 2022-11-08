#include "main.h"

/**
*str_concat - concatenates two strings
*@s1: first string
*@s2: second string
*Return: char
*/

char *str_concat(char *s1, char *s2)
{
	int i, j, k, l, m;
	char *res;

	k = l = 0;

	if (s1 != NULL)
	{
		i = 0;
		while (s1[i++] != '\0')
		{
			k++;
		}
	}
	if (s2 != NULL)
	{
		i = 0;
		while (s2[i++] != '\0')
		{
			l++;
		}
	}
	m = k + l;
	res = (char *)malloc(sizeof(char) * (m + 1));
	if (res == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < k; i++)
	{
		res[i] = s1[i];
	}
	for (j = 0; j < l; j++)
	{
		res[i] = s2[j];
	res[m] = '\0';
	}
	return (res);
}
