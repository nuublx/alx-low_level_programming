/**
 * _atoi - converts string to int
 * @s: string to be converted
 *
 * Return: integer
 */
int _atoi(char *s)
{
	int i, sum, digit;

	for (i = 0; s[i] != '\0'; i++)
	{}
	i--;
	sum = 0;
	digit = 1;

	while (i > 0 && s[i] >= '0' && s[i] <= '9')
	{
		sum += (s[i] - '0') * digit;
		digit *= 10;
		i--;
	}

	if (s[i] == '-')
		sum = sum * -1;
	else if (s[i] != '+' && s[i] >= '0' && s[i] <= '9')
		sum += (s[i] - '0') * digit;

	else if (s[i] < '0' || s[i] > '9')
		return (0); 
	return (sum);

}
