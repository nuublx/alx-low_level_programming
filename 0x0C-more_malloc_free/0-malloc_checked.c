#include<stdio.h>
#include<stdlib.h>
#include "main.h"
/**
 * malloc_checked - allocates memory using malloc
 * @b: number of bytes needed
 *
 * Return: pointer to allocated memory,
 * if it fails it terminates with status value of 98
 */
void *malloc_checked(unsigned int b)
{
	void *allocated;

	allocated = malloc(b);
	if (allocated == NULL)
		exit(98);
	return (allocated);
}
