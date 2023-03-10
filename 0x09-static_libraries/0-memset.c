/**
 * _memset - fills memory with a constant byte
 * @s: character array to fill
 * @b: constant byte to fill with the character array
 * @n: size of character array
 *
 * Return: character array after being filled
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
