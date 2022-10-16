#include <stdio.h>
#include <stdlib.h>

/**
*main - prints combination of single digits
*Return: 0
*/

int main(void)
{
	int i;

	for (i = 18; i < 28; i++)
	{
		putchar(i);
		if (i != 27)
		{
			putchar(',');
			putchar(' ');
		}
	putchar('\n');
	return (0);
}
