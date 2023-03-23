#include "variadic_functions.h"

/**
 * print_numbers - prints numbers followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed to function
 *
 * Return: void ALWAYS
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	if (n == 0 || !separator)
		return;

	va_start(list, n);

	for (i = 0; i + 1 < n ; i ++)
		printf("%d%s ", va_arg(list, int), separator);
	printf("%d\n", va_arg(list, int));
	va_end(list);

}


