#include<stdio.h>
#include"main.h"
/**
 * print_alphabet - void parameters
 * Description: prints alphabet in small letters
 * Return: void Always
*/
void print_alphabet(void)
{
	int i;

	for (i = 0; i < 26; i++)
	{
		_putchar(i + 'a');
	}
	_putchar('\n');
}
