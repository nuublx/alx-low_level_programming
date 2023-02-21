#include<stdio.h>
#include"main.h"
void print_alphabet(void)
{
	int i;

	for (i = 0; i < 26; i++)
	{
		_putchar(i+'a');
	}	
	_putchar('\n');
}
