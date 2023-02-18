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
	char message[] = "0123456789";
	int count;

	for (count = 0; count < 10; count++)
	{
		putchar(message[count]);
	}
	putchar('\n');
	return (0);
}
