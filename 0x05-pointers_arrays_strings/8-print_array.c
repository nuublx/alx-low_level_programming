#include "main.h"
#include<stdio.h>
/**
 * print_array - prints an integer array
 * @a: integer array
 * @n: size of array
 *
 * Return: void ALWAYS
 */
void print_array(int *a, int n)
{
	if (n < 1)
		return;
	int i;

	for (i = 0; i < n - 1; i++)
	{
		printf("%d, ", a[i]);
	}
	printf("%d\n", a[i]);
}
