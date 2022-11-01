#include "main.h"

/**
*_strstr - locates a substring
*@needle: substring
*@haystack: string
*Return: pointer to beginnig of substring if located and null if not
*/

char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0, j = 0;

	while (haystack[i])
	{
		while (needle[j] && (haystack[i] == needle[0]))
		{
			if (haystack[i + j] == needle[j])
				j++;
			else
				break;
		}
		if (needle[j])
		{
			j++;
			j = 0;
		}
		else
			return (haystack + i);
	}
	return (0);
}
