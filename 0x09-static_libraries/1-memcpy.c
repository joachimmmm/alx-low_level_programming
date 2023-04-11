#include <stdio.h>
#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: the destination of the copied memory area.
 * @src: the source/origin of the cp mem area.
 * @n: the memory area
 * Return: a potr to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int count;

	for (count = 0; count < n; count++)
	{
		dest[count] = src[count];
	}
	return (dest);
}
