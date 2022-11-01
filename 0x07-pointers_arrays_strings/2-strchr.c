#include "main.h"

/**
*_strchr - locates character in a string
*@s: string
*@c: char
*Return: pointer to char
*/

char *_strchr(char *s, char c)
{
	int i = 0, j;

	while (s[i])
	{
		i++;
	}
	for (j = 0; j < n; j++)
	{
		if (c == s[j])
			s += j;
			return (s);
	}
	return ('\0');
}
