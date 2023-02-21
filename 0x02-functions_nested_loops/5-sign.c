/**
 * print_sign - prints +, 0 , - takes one parameter
 *
 * Description: prints + for positive, - for negative, 0 for zero
 * depending on the value of n
 *
 * Return: 1 if n is +ve, -1 if -ve, and 0 if zero
 *
 * @n: a number that can be zero or +ve or -ve
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar('0');
	return (0);
}
