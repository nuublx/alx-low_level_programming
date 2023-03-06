#include "main.h"
/**
 * print_diagsums - prints the sum of diagonals in a 2d array
 * @a: 2d array square
 * @size: size of square
 *
 * Return: void always
 */
void print_diagsums(int *a, int size)
{
	int i, j, sum;

	sum = 0;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if ( i == j)
				sum += a[i][j];
		}
	}
	return (sum);
}
