#include "lists.h"

/**
 * free_listint2 - frees a l.list
 * @head: head
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *t_n;

	while (*head)
	{
		t_n = (**head).next;
		free(*head);
		*head = t_n;
	}
	if (head == NULL)
	{
		return;
	}
	*head = NULL;
}
