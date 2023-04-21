#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sums all parameters
 * @n: num of parameters
 * Return: sum of parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int index;
	int nsum;
	va_list newlist;

	va_start(newlist, n);

	if (n == 0)
	{
		return (0);
	}
	for (index = 0; index < n; index++)
	{
		nsum += va_arg(newlist, int);
	}
	va_end(newlist);
	return (nsum);
}
