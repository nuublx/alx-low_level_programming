#include"main.h"
/**
 * print_last_digit - prints last digit of a number
 *
 * Description: Performs a mathmatical operation
 * to extract the last digit of a number passed
 *
 * Return: the value of the last digit
 * @n: number to get its last digit
*/
int print_last_digit(int n)
{
	int m;

	if (n < 0)
		n = n * -1;

	m = n % 10;

	_putchar(m + '0');

	return (m);
}
