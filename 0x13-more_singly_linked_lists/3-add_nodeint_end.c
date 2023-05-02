#include "lists.h"

/**
 * add_nodeint_end - adds a node to the end of l.list
 * @head: head of l.list
 * @n: element
 * Return: ptr
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode, *t = *head;

	newNode = malloc(sizeof(listint_t));
	if (!newNode)
	{
		return (NULL);
	}
	(*newNode).n = n;
	(*newNode).next = NULL;
	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}
	while ((*t).next)
	{
		t = (*t).next;
	}
	(*t).next = newNode;
	return (newNode);
}

