#include "main.h"

/**
 * flip_bits - returns the bitnums to be flipped
 * @n: num
 * @m: another num
 * Return: bitnums
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int numcount = 0;
	int idx;
	unsigned long int t;

	for (idx = 63; idx >= 0; idx--)
	{
		t = (n ^ m) >> idx;
		if (t & 1)
		{
			numcount++;
		}
	}
	return (numcount);
}
