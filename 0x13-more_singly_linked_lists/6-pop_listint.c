#include "lists.h"

/**
 * pop_listint - deletes head node.
 * @head: head node
 * Return: head's data.
 */
int pop_listint(listint_t **head)
{
	int index;
	listint_t *new;

	if (!*head || !head)
	{
		return (0);
	}
	index = (**head).n;
	new = (**head).next;
	free(*head);
	*head = new;
	return (index);
}
