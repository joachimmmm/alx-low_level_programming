#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: types of arg
 */
void print_all(const char * const format, ...)
{
	char c;
	int i;
	float f;
	char *s;

	va_list newlist;
	va_start(newlist, format);
	while (*format != '\0')
	{
		if (*format == 'c')
		{
			c = va_arg(arg, char);
			printf("%c", c);
		}
		else if (*format == 'i')
		{
			i = va_arg(arg, int);
			printf("%d", i);
		}
		else if (*format == 'f')
		{
			f = va_arg(arg, float);
			printf("%f", f);
		}
		else if (*format == 's')
		{
			s = va_arg(arg, char);
			printf("%s", s);
		}



	va_end(new_list);
