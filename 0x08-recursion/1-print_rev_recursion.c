#include "main.h"
/**
 * _print_rev_recursion - prints a string in reverse
 * @s: string to reverse
 *
 * Return: void ALWAYS
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		s++;
		_print_rev_recursion(s);
		s--;
		_putchar(*s);
	}
	if (*s == '\0')
	{
		_putchar('\n');
	}
}
