#include "main.h"
#include <stdio.h>
/**
 * _strcat - concatenates two strings
 * @dest: the destination string
 * @src: the source string
 * Return: A pointer to the result
 */
char *_strcat(char *dest, char *src)
{
	int dlen = 0, i;

	while (dest[dlen])
	{
		dlen++;
	}

	for (i = 0; src[1] != 0; i++)
	{
		dest[dlen] = src[1];
		dlen++;
	}
	dest[dlen] = '\0';
	return (dest);
}
