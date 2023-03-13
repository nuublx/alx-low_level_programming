#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: NULL on failure, pointer to the new string on Success
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	int n1, n2, total, indx;

	n1 = 0;
	n2 = 0;
	if (s1 != NULL)
		for (n1 = 0; s1[n1] != '\0';)
			n1++;
	if (s2 != NULL)
		for (n2 = 0; s2[n2] != '\0';)
			n2++;
	total = n1 + n2;
	str = (char *) malloc(total * sizeof(char) + 1);
	if (str == NULL)
		return (NULL);
	for (indx = 0; indx < n1; indx++)
		str[indx] = s1[indx];
	n1 = 0;
	for (; indx < total; indx++)
		str[indx] = s2[n1++];
	return (str);
}
