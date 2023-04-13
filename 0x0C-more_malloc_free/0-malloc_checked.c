#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - allocates mem using alloc
 * @b: unsigned int.
 * Return: void.
 */
void *malloc_checked(unsigned int b)
{
	char *bee;

	if (b == 0)
	{
		return (NULL);
	}
	bee = malloc(b * sizeof(char));
	if (bee == NULL)
	{
		exit(98);
	}
	return (bee);
}
