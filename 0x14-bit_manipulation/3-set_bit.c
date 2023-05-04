#include "main.h"

/**
 * set_bit - sets val of bit
 * @n: num
 * @index: index from 0.
 * Return: 1 if successful, -1 if not
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	int return_val, return_val2 = 1;

	return_val = -1;
	if (index > 63)
	{
		return (return_val);
	}
	*n = (*n | (1UL << index));
	return (return_val2);
}
