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

	if (len % 2 == 0)
		half = len / 2;
	else
		half = (len - 1) / 2;

	while (str[half] != '\0')
	{
		_putchar(str[half++]);
	}

	_putchar('\n');
}
