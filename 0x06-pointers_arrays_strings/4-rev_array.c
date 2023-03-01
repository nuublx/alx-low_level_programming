/**
 * reverse_array - reverses an integer array
 * @a: the integer array
 * @n: the size of array
 *
 * Return: void ALWAYS
 */
void reverse_array(int *a, int n)
{
	int l, r, temp;

	l = 0;
	r = n - 1;
	while (l < r)
	{
		temp = a[l];
		a[l] = a[r];
		a[r] = temp;
		l++;
		r--;
	}
}
