#include "main.h"

/**
*factorial - factorial of a given number
*@n: given number
*Return: int
*/

int factorial(int n)
{
	int fact;

	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	else
	{
		return (fact = n * factorial(n - 1));
	}
}
