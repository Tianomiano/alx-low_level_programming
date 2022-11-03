#include "main.h"

/**
*_sqrt_recursion - squareroot
*@n: number
*Return: int
*/

int _sqrt_recursion(int n)
{
	int i;
	int j;

	if (n == 0)
	{
		return (0);
	}
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
		return (_sqrt_recursion(i + 1, b));
	}
	return (_sqrt_recursion(1, n));
}
