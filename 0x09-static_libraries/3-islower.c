#include"main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _islower - takes one int parameter
 *
 * Description: takes one character and checks if its lowercase or not
 *
 * @c: character that gets checked
 *
 * Return: 1 if c is lowercase, 0 otherwise
*/
int _islower(int c)
{
	if (c < 97 || c > 122)
		return (0);
	else
		return (1);
}
