#include"main.h"

/**
 * print_alphabet_x10 - prints output
 * Description: prints the alphabet 10 times in small letters
 * Return: void always
*/
void print_alphabet_x10(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 26; j++)
		{
			_putchar(j + 'a');
		}
		_putchar('\n');
	}
}
