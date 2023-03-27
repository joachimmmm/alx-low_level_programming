#include <stdio.h>
#include "main.h"

/**
 * _strlen - Returns the length of the string
 * @s: the value to be passed
 * Return:  the length of @s
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s++)
	length++;
	return (length);
}
