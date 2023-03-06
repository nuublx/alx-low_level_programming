#include "main.h"
#include<stdio.h>
/**
 * print_diagsums - prints the sum of diagonals in a 2d array
 * @a: 2d array square
 * @size: size of square
 *
 * Return: void always
 */
void print_diagsums(int *a, int size)
{
	int i, sum1, sum2;

	sum1 = 0;
	sum2 = 0;
	for (i = 0; i < size; i++)
	{
		sum1 += a[(size * i) + i];
		sum2 += a[(size * (i + 1)) - (i + 1)];
	}

	printf("%d, %d\n", sum1, sum2);
}
