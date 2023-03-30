#include "main.h"

/**
 * reverse_array - prints the contents of an array in reverse
 * @a: array to be reversed
 * @n: num of elements in the array
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
