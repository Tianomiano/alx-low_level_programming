#include <stdio.h>

/**
*main - prints sum of even valued terms
*Return: 0
*/

int main(void)
{
	unsigned long int j = 0;
	unsigned long int k = 1;
	unsigned long l;
	float i;

	while (1)
	{
		l = j + k;
		if (l > 4000000)
			break;
		if ((l % 2) == 0)
			i += l
		j = k;
		k = l;
	}
	printf("%.0f\n", i);
	return (0);
}
