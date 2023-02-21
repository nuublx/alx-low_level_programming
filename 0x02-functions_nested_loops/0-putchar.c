#include<stdio.h>

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

	for (i = 0; i < sizeof(msg); i++)
	{
		putchar(msg[i]);
	}
	putchar('\n');

	return (0);
}
