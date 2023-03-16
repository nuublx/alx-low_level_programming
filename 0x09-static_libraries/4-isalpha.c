#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _isalpha - takes one parameter
 *
 * Description: checks if character is an alphabet
 *
 * Return: 1 if c is a letter 0 otherwise
 *
 * @c: variable that gets checked if its a letter or not
*/
int _isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
		return (1);
	return (0);
}
