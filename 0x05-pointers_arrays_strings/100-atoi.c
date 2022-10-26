#include "main.h"

/**
*_atoi - converts string to integer
*@s: string
*Return: 0
*/
int _atoi(char *s)
{
	int i = 0, j = 0, k = 1;
	unsigned int l = 0;

	while (s[i])
	{
		if (s[i] == 45)
		{
			k *= -1;
		}
		while (s[i] >= 48 && s[i] < 58)
		{
			j = 1;
			l = (l * 10) + (s[i] - '0');
			i++;
		}
		if (j == 1)
		{
			break;
		}
		i++;
	}
	l *= k
	return (l);
}
