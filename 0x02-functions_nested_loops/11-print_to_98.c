#include<stdio.h>
/**
 *print_to_98 - prints from any start point till 98
 *
 * Description: prints from any start point either +ve -ve till it prints 98
 *
 * Return: void ALWAYS
 *
 * @n: the start point where the function will start printing from
*/
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
			printf("%i, ", n++);
	}
	else
	{
		while (n > 98)
			printf("%i, ", n--);
	}
		printf("98\n");
}
