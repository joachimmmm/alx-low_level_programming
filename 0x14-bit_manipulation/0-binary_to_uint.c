#include "main.h"

/**
 * binary_to_uint - converst binary num to unsigned int
 * @b: pointer to str
 * Return: converted num
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int to_decimal = 0;
	int index;

	if (b == NULL)
	{
		return (0);
	}
	for (index = 0; b[index]; index++)
	{
		if (b[index] > '1' || b[index] < '0')
		{
			return (0);
		}
		to_decimal = 2 * to_decimal + (b[index] - '0');
	}
	return (to_decimal);
}
