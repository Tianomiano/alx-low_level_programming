#include "main.h"

/**
*sqrroot - checks for root
*@i: int
*@j: int
*Return: int
*/

int sqrroot(int i, int j)
{
	if (i * i == j)
	{
		return (i);
	}
	if (i * i > j)
	{
		return (-1);
	}
	else
	{
		return (sqrroot(i + 1, b));
	}
}

/**
*_sqrt_recursion - squareroot
*@n: number
*Return: int
*/

int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	else
	{
		return (sqrroot(1, n));
	}
}
