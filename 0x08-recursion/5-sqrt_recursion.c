/**
 * _sqrt_recursion - natural square root of a number
 * @n: number to get square
 *
 * Return: square root of number 
 */
int _sqrt_recursion(int n)
{
	if (n == 1)
	       return (1);
	if (n < 1)
		return (-1);
	return (1 + _sqrt_recursion(n / 2));	
}
