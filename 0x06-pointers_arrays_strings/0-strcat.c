/**
 * _strcat - concatenates two strings
 * @dest: the first string
 * @src: the second string
 *
 * Return: the New concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int len1, len2;

	for (len1 = 0; dest[len1] != '\0'; len1++)
	{}

	for (len2 = 0; src[len2] != '\0'; len2++)
		dest[len1++] = src[len2];

	dest[len1] = '\0';

	return (dest);
}
