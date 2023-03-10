/**
 * _isupper - checks if character is upper alphabet
 * Return: 1 if true 0 if false
 * @c: character given to get checked
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
