#include "main.h"
#include <stdio.h>
/**
 * main - prints the program name followed by a newline
 * @argc: number of arguments
 * @argv - array of arguments given
 *
 * Return: 0 Always
 */
int main (int argc, char **argv)
{
	(void)argc;
	printf("%s\n", *argv);

	return (0);
}
