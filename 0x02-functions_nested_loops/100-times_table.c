#include"main.h"

/**
 * times_table - prints output takes no parameters
 *
 * Description: prints times table from 0 to n
 *
 * Return: void Always
 *
 * @n: max number to reach creating times table
*/
void print_times_table(int n)
{
	int i, j, value, f_digit, l_digit;

	for (i = 0; i < (n + 1); i++)
	{
		for (j = 0; j < (n + 1); j++)
		{
			value = i * j;
			if (value < 10)
			{
				if (j == 0)
				{
					_putchar('0');
				}
				else
				{
					_putchar(' ');
					_putchar(value + '0');
				}
			}
			else
			{
				l_digit = value % 10;
				f_digit = value / 10;
				_putchar(f_digit + '0');
				_putchar(l_digit + '0');
			}
			if (j == 9)
				continue;
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
