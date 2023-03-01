/**
 * _strncat - concatenate n characters from src to dest
 * @dest: will be added on
 * @src: take from it n characters
 * @n: number of characters to concatenate
 *
 * Return: concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int destlen, srclen;

	if (n <= 0)
		return (dest);
	for (destlen = 0; dest[destlen] != '\0'; destlen++)
	{}

	for (srclen = 0; src[srclen] != '\0' && srclen < n; srclen++)
	{
		dest[destlen++] = src[srclen];
	}
	dest[destlen] = '\0';
	return (dest);
}
