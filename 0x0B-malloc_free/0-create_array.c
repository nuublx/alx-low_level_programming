#include<stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_array - creates an array of chars and intializes it with a char
 * @size: size of array
 * @c: used to intialize array
 *
 * Return: NULL if size = 0, pointer to array or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	int i;

	if (size == 0)
		return (NULL);

	arr = (char *) malloc(size * sizeof(c));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		*(arr + i) = c;

	return (arr);
}
