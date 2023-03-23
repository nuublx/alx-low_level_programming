#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sums its parameter
 * @n: one of the arguments to sum
 *
 * Return: sum of the parameters passed
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	if (n == 0)
		return (sum);

	va_start(ap, n);
	for (i = n; i >= 0; i = va_arg(ap, unsigned int))
		sum += i;
	va_end(ap);
	return (sum);

}
