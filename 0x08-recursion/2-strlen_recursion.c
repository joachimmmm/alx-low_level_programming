#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - returns str length.
 * @s: str
 * Return: len of str
 */

int _strlen_recursion(char *s)
{

	if (*s != '\0')
	{
		s++;
		return (_strlen_recursion(s) + 1);
	}
	return (0);
}
