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
	for (i = 0; i < n; i++)
	{
		if (!separator)
			printf("%d", va_arg(list, int));
		else if (separator && i == 0)
			printf("%d", va_arg(list, int), separator);
		else 
			printf("%s%d", separator, va_arg(list, int));
	}
	va_end(list);

}


