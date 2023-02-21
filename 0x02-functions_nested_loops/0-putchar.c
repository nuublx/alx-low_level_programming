#include "main.h"
/**
 *main - Entry point
 *
 *Description: prints '_putchar'
 *
 *Return: Always 0 (SUCCESS)
*/

int main(void)
{
	char msg[] = "_putchar";
	int i;

	for (i = 0; i < (int)sizeof(msg); i++)
	{
		_putchar(msg[i]);
	}
	_putchar('\n');

	return (0);
}
