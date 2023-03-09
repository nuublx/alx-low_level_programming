#include "main.h"

int actual_is_palindrome(char *s, int strt, int end);
int _strlen_recursion(char *s);
/**
 * is_palindrome - checks if string is palindrome
 * @s: string to check
 *
 * Return: 1 if palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);

	return (actual_is_palindrome(s, 0, _strlen_recursion(s) - 1));
}
/**
 * actual_is_palindrome - runs recursively to check if string is palindrome
 * @s: string to check
 * @strt: start of the string
 * @end: end of the string
 *
 * Return: 1 if palindrome else 0
 */
int actual_is_palindrome(char *s, int strt, int end)
{
	if (strt > end)
		return (1);
	if (strt <= end)
	{
		if (s[strt] == s[end])
			return (actual_is_palindrome(s, strt + 1, end - 1));
	}
	return (0);
}

/**
 * _strlen_recursion - returns the length of a string
 * @s: string to return its length
 *
 * Return: the length of the string
 */
int _strlen_recursion(char *s)
{
	int count;

	if (*s != '\0')
	{
		s++;
		count = _strlen_recursion(s);
		return (count + 1);
	}
	return (0);
}
