#include "main.c"

/**
 * reverse_array - Reverses the content of an array of integers
 * @a: integer to be reversed
 * @n: Number of element in array
 */
void reverse_array(int *a, int n)
{

	int tmp, index;

	for (index = n - 1; index >= n / 2; index--)
	{
		tmp = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = tmp;
	}
}