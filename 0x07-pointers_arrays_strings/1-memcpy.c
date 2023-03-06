/**
 * _memcpy - copies bytes from a memory area to an another memory area
 * @dest: will copy to
 * @src: will copy from
 * @n: number of bytes
 *
 * Return: dest after copying into it
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
