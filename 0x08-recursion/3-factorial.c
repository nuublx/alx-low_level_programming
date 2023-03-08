/**
 * factorial - returns factorial of a given number
 * @n: number to get factorial of
 *
 * Return: -1 if n is negative, 1 if n = 1, else factorial of number
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 2)
		return (1);

	return (factorial(n - 1) + factorial(n - 2));
}
