/**
 * _isdigit - tests if input given is a digit
 * Return: 1 if true 0 if false
 * @c: input given to check
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
