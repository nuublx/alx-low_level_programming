#include "main.h"

/**
 * puts_half - prints the second half of the string
 * @str: the string to print from
 *
 * Return: void ALWAYS
 */

void puts_half(char *str)
{
	int len, half;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}

	half = len / 2;

	while (half < len)
	{
		_putchar(str[half++]);
	}

	_putchar('\n');
}
