#include<stdio.h>
/**
 * _strchr - returns a pointer to a position of a character in string
 * @s: string passed to check inside of it
 * @c: character to check for
 *
 * Return: a pointer to the first occurence of c in s
 */
char *_strchr(char *s, char c)
{
		int a;

		while (1)
		{
			a = *s++;
			if (a == c)
			{
				return (s - 1);
			}
			if (a == 0)
			{
				return (NULL);
			}
		}
}
