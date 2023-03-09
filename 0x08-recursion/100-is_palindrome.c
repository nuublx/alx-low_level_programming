#include "main.h"

int actual_is_palindrome(char *s, int strt, int end);
/**
 * is_palindrome - checks if string is palindrome
 * @s: string to check
 *
 * Return: 1 if palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	int r;

	r = 0;

	while (s[r] != '\0')
		r++;
	r--;
	return actual_is_palindrome(s, 0, r);
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
			return actual_is_palindrome(s, strt + 1, end - 1);
	}
	return (0);
}
