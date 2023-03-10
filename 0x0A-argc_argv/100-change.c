#include "main.h"
#include <stdio.h>
#include <stdlib.h>
int mincoins(int *coins, int n, int change);
/**
 * main - prints minimum number of change
 * @argc: number of args passed
 * @argv: array of args passed
 *
 * Return
 */
int main(int argc, char **argv)
{
	int coins[5] = {25, 10, 5, 2, 1};
	int change;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	change = atoi(argv[1]);
	printf("%d\n", mincoins(coins, 5, change));
	return (0);
}
/**
 * mincoins - return minimum number of coins 
 * @coins: array of avlbl coins
 * @n: number of coins
 *
 * Return: number of coins needed
 */
int mincoins(int *coins, int n, int change)
{
	int number_of_change, i, res;

	if (change == 0)
		return (0);
	number_of_change = -1;

	for (i = 0; i < n; i++)
	{
		printf("current change: %d\ncurrent coin: %d\n", change, coins[i]);
		if (change >= coins[i])
		{
			res = mincoins(coins, n, change - coins[i]) + 1;
			if (res < number_of_change || number_of_change == -1)
				number_of_change = res;
		}
	}
	return (number_of_change);
}
