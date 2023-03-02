/**
 * _strcmp - compares between two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: -15 if s1 < s2, 15 s1 > s2, 0 s1 = s2
 */
int _strcmp(char *s1, char *s2)
{

	while (*s1 == *s2)
	{
		if (*s1 == '\0')
			return (0);
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
