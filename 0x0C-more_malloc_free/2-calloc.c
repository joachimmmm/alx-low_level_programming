#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - allocates mem for arr
 * @nmemb: elements
 * @size: size of arr
 * Return: void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int q = 0;
	int r = 0;
	char *str;

	if (size == 0 || nmemb == 0)
	{
		return (NULL);
	}
	r = size * nmemb;
	str = malloc(r);

	if (str == NULL)
	{
		return (NULL);
	}
	while (q < r)
	{
		str[q] = 0;
		q++;
	}
	return (str);
}
