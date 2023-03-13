#include<stdio.h>
#include<stdlib.h>
#include "main.h"

/**
 * free_grid - frees a 2d array from memory
 * @grid: 2d array to free
 * @heigh: height of the 2d array
 *
 * Return: void ALWAYS
 */
void free_grid(int **grid, int height)
{
	int indx;

	for (indx = 0; indx < height; indx++)
		free(grid[indx]);
	free(grid);
}
