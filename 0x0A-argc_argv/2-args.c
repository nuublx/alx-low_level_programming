#include "main.h"
#include <stdio.h>
/**
 * main - prints all args recieved
 * @args: number of arguments passed
 * @argv: array of args passed
 *
 * Return: 0 Always
 */
int main(int args, char **argv)
{
	int i;

	if (args > 1)
		for (i = 1; i < args; i++)
			printf("%s\n", argv[i]);
	return (0);
}
