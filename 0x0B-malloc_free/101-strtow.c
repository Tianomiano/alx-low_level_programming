#include "main.h"

/**
* strtow - splits a string into words.
* @str: the string
*
* Return: returns a pointer to an array of strings (words)
*/

char **strtow(char *str)
{
	if (str == NULL || str[0] == '\0' || (str[0] == ' ' && str[1] == '\0'))
		return (NULL);
}
