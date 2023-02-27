/**
 * rev_string - reverses a string
 * @s: the string to be reversed
 *
 * Return: void ALWAYS
 */
void rev_string(char *s)
{
	int i,j;
	char b, e;
	
	for (i = 0; s[i] != '\0'; i++)
	{}
	i--;
	j = 0;
	while (i > -1 && s[j] != '\0')
	{
		e = s[i];
		b = s[j];
		s[j] = e;
		s[i] = b;
		i--;
		j++;
	}
}
