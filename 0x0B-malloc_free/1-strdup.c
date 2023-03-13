#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns pointer to new allocated memory that has copy
 * of the string given as a parameter.
 * @str: string to make a copy from
 *
 * Return: Null if str = NULL, on Success returns pointer to the
 * duplicated string or NULL if insufficient memory.
 */
char *_strdup(char *str)
{
	char *strdp;
	int n;

	if (str == NULL)
		return (NULL);
	n = 0;
	while (str[n] != '\0')
		n++;
	n -= 1;
	strdp = (char *) malloc(n * sizeof(char));

	if (strdp == NULL)
		return (NULL);
	return (strdp);
}
