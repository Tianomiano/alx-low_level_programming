#include "main.h"

/**
*_strlen - prints length of a string
*@s: Pointer
*Return: Length
*/

int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
