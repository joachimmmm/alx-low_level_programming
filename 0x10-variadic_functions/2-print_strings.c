#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings - prints str
 * @separator: char for separating str
 * @n: num of str
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int index;
	char *combo;

	va_list newlist;

	va_start(newlist, n);
	for (index = 0; index < n; index++)
	{
		combo = va_arg(newlist, char*);
		if (combo != NULL)
		{
			printf("%s", combo);
		}
		else
		{
			printf("(nil)");
		}
		if (separator != NULL && index < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(newlist);
	printf("\n");
}
