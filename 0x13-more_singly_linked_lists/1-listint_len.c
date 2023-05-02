#include "lists.h"

/**
 * listint_len - returns the element nums
 * @h: linked list
 * Return: num of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t numbers = 0;

	while (h)
	{
		numbers++;
		h = (*h).next;
	}
	return (numbers);
}
