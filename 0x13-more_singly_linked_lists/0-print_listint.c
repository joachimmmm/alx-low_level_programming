#include "lists.h"

/**
 * print_listint - prints all the element of lists
 * @h: elements of list
 * Return: elements of list
 */
size_t print_listint(const listint_t *h)
{
	size_t numbers = 0;

	while (h)
	{
		printf("%d\n", (*h).n);
		numbers++;
		h = (*h).next;
	}
	return (numbers);
}
