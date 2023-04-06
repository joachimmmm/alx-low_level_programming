#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - print str in reverse.
 * @s: the str.
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		s++;
		_print_rev_recursion(s);
		s--;
		putchar(*s);
	}
}
