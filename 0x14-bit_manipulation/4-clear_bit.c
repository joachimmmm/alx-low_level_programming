#include "main.h"

/**
 * clear_bit - sets val to 0.
 * @index: index from 0;
 * @n: num
 * Return: 1 if successful, -1 if not
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	int fail_value = -1, success_value = 1;

	if (index > 63)
	{
		return (fail_value);
	}
	*n = (*n & ~(1UL << index));
	return (success_value);
}
