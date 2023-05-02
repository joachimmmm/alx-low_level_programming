#include "lists.h"

/**
 * free_listint - frees a l.list
 * @head: head of l.list
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *t_n;

	while (head)
	{
		t_n = (*head).next;
		free(head);
		head = t_n;
	}
}
