#include"main.h"

/**
 * print_times_table - prints output takes no parameters
 *
 * Description: prints times table from 0 to n
 *
 * Return: void Always
 *
 * @n: max number to reach creating times table
*/
void print_times_table(int n)
{
	int i, j, value;

	if (n > 15 || n < 0)
		return;
	for (i = 0; i < (n + 1); i++)
	{
		for (j = 0; j < (n + 1); j++)
		{
			value = i * j;
			if (value < 10)
			{
				if (j == 0)
					_putchar('0');

				print_one_digit(value);
			}
			else if (value < 100)
				print_two_digits(value);
			else
				print_three_digits(value);
			if (j == n)
				continue;
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}


/**
 * print_one_digit - prints output takes no parameters
 *
 * Description: prints a one digit number
 *
 * Return: void Always
 *
 * @value: number to be printed
*/
void print_one_digit(int value)
{
	_putchar(' ');
	_putchar(' ');
	_putchar(value + '0');
}

/**
 * print_two_digits - prints output takes no parameters
 *
 * Description: prints a two digit number
 *
 * Return: void Always
 *
 * @value: number to be printed
*/
void print_two_digits(int value)
{
	int l_digit, f_digit;

	l_digit = value % 10;
	f_digit = value / 10;
	_putchar(' ');
	_putchar(f_digit + '0');
	_putchar(l_digit + '0');
}

/**
 * print_three_digits - prints output takes no parameters
 *
 * Description: prints a three digit number
 *
 * Return: void Always
 *
 * @value: number to be printed
*/
void print_three_digits(int value)
{
	int l_digit, f_digit, m_digit;

	l_digit =  value % 10;
	value = value / 10;
	m_digit = value % 10;
	f_digit = value / 10;
	_putchar(f_digit + '0');
	_putchar(m_digit + '0');
	_putchar(l_digit + '0');
}
