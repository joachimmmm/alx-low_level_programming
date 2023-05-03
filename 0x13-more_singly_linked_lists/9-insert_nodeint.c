#include "lists.h"

/**
 * insert_nodeint_at_index - puts node at position
 * @head: head node
 * @idx: index
 * @n: l.list data
 * Return: new node address
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode, *tempNode = *head;
	unsigned int index;

	newNode = malloc(sizeof(listint_t));
	if (!head || !newNode)
	{
		return (NULL);
	}
	(*newNode).n = n;
	(*newNode).next = NULL;
	if (idx == 0)
	{
		(*newNode).next = *head;
		*head = newNode;
		return (newNode);
	}
	for (index = 0; index < idx && tempNode; index++)
	{
		if (index != idx - 1)
		{
			tempNode = (*tempNode).next;
		}
		else
		{
			(*newNode).next = (*tempNode).next;
			(*tempNode).next = newNode;
			return (newNode);
		}
	}
	return (NULL);
}
