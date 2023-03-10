#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two arguments passed
 * @argc: number of args passed
 * @argv: array of args passed
 *
 * Return: 0 Always
 */
int main(int argc, char **argv)
{
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}
