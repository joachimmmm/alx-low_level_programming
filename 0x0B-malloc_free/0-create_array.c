#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an arr of char.
 * @size: size of mem
 * @c: char
 * Return: ptr to arr/ NULL if error
 */

char *create_array(unsigned int size, char c)
{
	unsigned int j;
	char *array;

	if (size == 0)
	{
		return (NULL);
	}
	array = malloc(size * sizeof(char));
	if (array == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < size; j++)
	{
		array[j] = c;
	}
	return (array);
}
