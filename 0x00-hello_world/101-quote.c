#include<stdio.h>
#include<stdlib.h>
/**
 * main - Entry point
 *
 * Description: 'prints a statement in the standard error.'
 *
 * Return: Always 1 (Error)
 */

int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, str, 58);
	return (1);
}
