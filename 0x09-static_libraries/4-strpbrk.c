#include<stdio.h>
/**
 * check - checks if a character exist in a string
 * @c: character
 * @str: string
 *
 * Return: 1 -> true, 0 -> false
 */
int check(char c, char *str)
{
	unsigned int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (c == str[i++])
			return (1);
	}
	return (0);
}
/**
 * _strpbrk - locates first occurence of a character in accept in s
 * @s: string to search in
 * @accept: string to search in
 *
 * Return: the start of the first occurance
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (check(s[i++], accept) == 1)
			return (s + i - 1);
	}
	return (NULL);
}
