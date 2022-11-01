#include "main.h"

/**
*_strspn - gets the length of a prefix substring
*@s: initial seg
*@accept: bytes from
*Return: no of bytes
*/

unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j;
	int k;

	for (j = 0; s[j] != '\0'; j++)
	{
		if (s[j] != 32)
		{
			for (k = 0; accept[k] != '\0'; k++)
			{
				if (s[j] == accept[k])
				{
					i++;
				}
			}
		}
		else
		{
			return (i);
		}
	}
	return (s);
}
