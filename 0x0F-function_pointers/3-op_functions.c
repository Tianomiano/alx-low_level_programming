#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
*op_add - adds two numbers
*@a: first number
*@b: second number
*Return: sum
*/
int op_add(int a, int b)
{
	return (a + b);
}
/**
*op_sub - subtracts two numbers
*@a: first number
*@b: second number
*Return: subtraction
*/
int op_sub(int a, int b)
{
	return (a - b);
}
/**
*op_mul - subtracts two numbers
*@a: first number
*@b: second number
*Return: multiplication
*/
int op_mul(int a, int b)
{
	return (a * b);
}
/**
*op_div - divides two numbers
*@a: first number
*@b: second number
*Return: division
*/
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
*op_mod - divides two numbers
*@a: first number
*@b: second number
*Return: modulus
*/
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
