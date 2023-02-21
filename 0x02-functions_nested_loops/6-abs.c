/**
 * _abs - returns absolute value of the value passed
 *
 * Description: returns the positive value of the integer passed to it
 *
 * Return: a positive integer Always
 *
 * @n: an integer that gets checked and returned, changed if -ve
*/
int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	return (n);
}
