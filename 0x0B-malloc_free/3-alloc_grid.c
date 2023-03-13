#include <stdio.h>
#include <stdlib.h>

/**
 * alloc-grid - return a pointer to a 2 dimensional arrray of integers
 * @width: width of the 2d array
 * @height: height of the 2d array
 *
 * Return: NULL on failure or if width or height = 0 else return pointer
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width == 0 || height == 0)
		return (NULL);
	grid = (int **) malloc(height * sizeof(int*));
	if (grid == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(width * sizeof(int));
		if (grid[i] == NULL)
			return (NULL);
	}
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	return (grid);
}
