#include<stdio.h>
#include<stdlib.h>
#include "main.h"
/**
 * argstostr - concatenates all of the arguments passed to it
 * @ac: number of arguments passed
 * @av: arguments to concatenate
 *
 * Return: NULL on failure, pointer to the conactenated string on success
 */
char *argstostr(int ac, char **av)
{
	int n, i, j;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	n = 0;
	for (i = 0; i < ac; i++)
	{
		while (av[i][n] != '\0')
			n++;
	}
	str = (char *)malloc((n + ac) * sizeof(char) + 1);

	if (str == NULL)
		return (NULL);
	n = 0;
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
			str[n++] = av[i][j++];
		str[n++] = '\n';
	}
	return (str);
}
