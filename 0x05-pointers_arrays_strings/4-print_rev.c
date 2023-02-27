#include "main.h"
/**
 * print_rev - prints a string, in reveerse, followed by a new line.
 * @s: The string to be printed
 *
 * Return: void ALWAYS
 */
void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{}
	i--;
	while (i >= 0)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
