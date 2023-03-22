#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * int_index -searches for an integer
 * @array: array to search in
 * @size: size of array
 * @cmp: compartor to search with
 *
 * Return: -1 if no element matches or size < 1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size < 1 || !array || !cmp)
		return (-1);
	for (i = 0; i < size; i++)
		if (cmp(array[i]) > 0)
			return (i);
}
