#include "main.h"

/**
*_islower - checks for lowercase letters
*@c: character being checked
*Return: 1 || 0
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
