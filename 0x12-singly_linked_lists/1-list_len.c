#include "lists.h"
#include <stdio.h>

/**
 * list_len - returns the num of element in linked list
 * @h: linked list
 * Return: length of list
 */
size_t list_len(const list_t *h)
{
	size_t index = 0;

	while (h)
	{
		index++;
		h = (*h).next;
	}
	return (index);
}
