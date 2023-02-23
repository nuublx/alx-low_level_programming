/**
 * more_numbers - prints 10 times from 0 to 14
 * Return: void
 */

void more_numbers(void)
{
	int i, f_digit, l_digit;

	for (i = 0; i < 15; i++)
	{
		if (i >= 10)
			_putchar('1');
		_putchar((i % 10) + '0');
	}
}
