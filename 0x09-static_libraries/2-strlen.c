/**
 * _strlen - returns the length of a string
 * @s: string
 *
 * Return: the length of the string passed as input
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{}

	return (i);
}
