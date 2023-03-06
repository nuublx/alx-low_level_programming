/**
 * check - checks if char a is in string f
 * @a: character to check
 * @f: string to check in
 *
 * Return: true or false
 */
int check(char a, char *f)
{
	unsigned int i;

	i = 0;
	while (f[i] != '\0')
	{
		if (f[i++] == a)
			return (1);
	}
	return (0);
}
/**
 * _strspn - returns number of bytes in start of s that exist in accept
 * @s: first string
 * @f: second string
 *
 * Return: int ALWAYS
 */
unsigned int _strspn(char *s, char *f)
{
	unsigned int i, count;

	i = 0;
	count = 0;
	while (s[i] != '\0' && check(s[i], f) == 1)
	{
		count++;
		i++;
	}
	return (count);
}
