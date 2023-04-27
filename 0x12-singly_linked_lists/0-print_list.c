#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * print_list - printa all elements of a list
 * @h: list element
 * Return: the num of nodes
 */
size_t print_list(const list_t *h)
{
	size_t index = 0;

	while (h)
	{
		if ((*h).str)
		{
			printf("[%u] %s\n", (*h).len, (*h).str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		h = (*h).next;
		index++;
	}
	return (index);
}
