/**
 * rev_string - reverses a string
 * @s: the string to be reversed
 *
 * Return: void ALWAYS
 */
void rev_string(char *s)
{
	char tmp;
	int i, len, end;

	len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	end = len - 1;

	for (i = 0; i < len / 2; i++)
	{
		tmp = s[i];
		s[i] = s[end];
		s[end--] = tmp;
	}
}
