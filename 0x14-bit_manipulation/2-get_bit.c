#include "main.h"

/**
 * get_bit - get value of bit at idx
 * @index - index
 * @n: num
 * Return: -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int numbit;

	if (index > 63)
	{
		return (-1);
	}
	numbit = 1 & (n >> index);
	return (numbit);
}
