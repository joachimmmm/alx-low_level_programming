#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints nums
 * @seperator: str btw nums
 * @n: argc
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int index;
	int nums;
	va_list newlist;

	va_start(newlist, n);
	for (index = 0; index < n; index++)
	{	nums = va_arg(newlist, int);
		printf("%d", nums);
	}
	if (separator != NULL && index < n - 1)
	{
		printf("%s", separator);
	}
	va_end(newlist);
	printf("\n");
}
