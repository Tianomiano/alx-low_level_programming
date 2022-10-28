#include "main.h"

/**
**rot13 - encodes string using rot13
*@c: string
*Return: char
*/

char *rot13(char *c)
{
	int i;
	int j;

	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; *(c + i); i++)
	{
		for (j = 0; j < 52)
		{
			if (a[j] == *(c + i))
			{
				*(c + i) = b[j];
				break;
			}
		}
	}
	return (c);
}
