#include "main.h"
#include <stdio.h>

/**
 * _memset - a function that fills mem with a constant byte.
 * @s: the pointer
 * @b: the constant byte
 * @n: the var to be filled
 * Return: return s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int count;

	for (count = 0; count < n; count++)
	{
		*s = b;
	}
	return (s);
}
