#include<stdio.h>
/**
 * _strstr - locates first occurence of a substring in a string
 * @haystack: string
 * @needle: substring
 *
 * Return: string starting with the substring
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j;

	i = 0;
	j = 0;
	while (haystack[i] != '\0')
	{
		while (haystack[i] == needle[j])
		{
			i++;
			j++;
		}
		if (j > 0 && (needle[j - 1] == '\0' || needle[j] == '\0'))
		{
			return (haystack + i - j);
		}
		else
			j = 0;
		i++;
	}
	return (NULL);
}
