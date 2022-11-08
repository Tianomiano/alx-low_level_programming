#include "main.h"

/**
*alloc_grid - 2d array of int
*@width: width
*@height: height
*Return: grid
*/

int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			for (i = i - 1; i >= 0; i--)
			{
				free(grid[i]);
			}
		free(grid);
		return (NULL);
		}
	}
	for (j = 0; j < width; j++)
	{
		grid[i][j] = 0;
		return (grid);
	}
}
