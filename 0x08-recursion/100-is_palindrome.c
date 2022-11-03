#include "main.h"

/**
*len - length of string
*@s: string
*Return: length of string
*/

int len(char *s)
{
	if (s[0] != '\0')
	{
		return (1 + len(s + 1));
	}
	else
		return (0);
}

/**
*pali - checks if string is palindrome
*@i: left index
*@j: right index
*@s: string
*Return: 1 or 0
*/

int pali(char *s, int i, int j)
{
	if (s[i] == s[j])
	{
		if (i > j / 2)
		{
			return (1);
		}
		else
			return (pali(s, i + 1, j - 1));
	}
	else
		return (0);
}

/**
*is_palindrome - checks if string is palindrome
*@s: string
*Return: 1 or 0
*/
int is_palindrome(char *s)
{
	return (pali(s, 0, len(s) - 1));
}
