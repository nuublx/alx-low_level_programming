/**
 * _strncpy - copies from src n chars to dest
 * @dest: will be copied into
 * @src: will be copied from
 * @n: characters to copy
 *
 * Return: new dest string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
