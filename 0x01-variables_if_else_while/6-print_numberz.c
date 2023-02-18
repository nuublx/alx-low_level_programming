#include <stdlib.h>
#include <time.h>
#include<stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 * Description: prints a message that depends on
 * last digit of the random number generated
 * Return: Always 0 Success
*/
int main(void)
{
	int count;

	for (count = 0; count < 10; count++)
	{
		putchar(count+'0');
	}
	putchar('\n');
	return (0);
}
