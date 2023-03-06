#include<stddef.h>
/**
 * _strchr - returns a pointer to a position of a character in string
 * @s: string passed to check inside of it
 * @c: character to check for
 *
 * Return: a pointer to the first occurence of c in s
 */
char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) == c)
			return (s + i);
	}

	return (NULL);
}
