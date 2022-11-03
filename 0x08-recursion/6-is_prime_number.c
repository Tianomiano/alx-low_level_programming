#include "main.h"

/**
*prime - claculates prime numbers
*@i: int
*@j: int
*Return: int
*/

int prime(int i, int j)
{
	if (j < 2 || j % i == 0)
	{
		return (0);
	}
	else if (j > i / 2)
	{
		return (1);
	}
	else
	{
		return (prime(i + 1, j));
	}
}

/**
*is_prime_number - prints prime numbers
*@n: prime number
*Return: 1 or 0
*/

int is_prime_number(int n)
{
	if (n == 2)
	{
		return (1);
	}
	return (prime(2, n));
}
