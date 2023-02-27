/**
 * _strcpy - copies from src to dest
 * @src: string that will copy from
 * @dest: string to copy into
 *
 * Return: string dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0' || src[i] == NULL; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
