#include "main.h"
/**
 * print_diagonal - prints line
 * Return: void
 * @n: number of lines
 */

void print_diagonal(int n)
{
	int i;

	for (i = 0; i < n; i++)
		_putchar('_');

	_putchar('\\');
	_putchar('\n');
}
