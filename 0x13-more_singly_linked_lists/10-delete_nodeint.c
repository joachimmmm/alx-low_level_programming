#include "lists.h"

/**
 * delete_node_at_index - deletes node at index of l.list
 * @head: head node
 * @index: node index
 * Return: 1(success), -1(failed)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int idx = 0;
	listint_t *node = NULL, *tempNode = *head;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (**head).next;
		free(tempNode);
		return (1);
	}
	while (idx < (index -1))
	{
		if ((!(*tempNode).next) || !tempNode)
		{
			return (-1);
		}
		tempNode = (*tempNode).next;
		idx++;
	}
	node = (*tempNode).next;
	(*tempNode).next = (*node).next;
	free(node);
	return (1);
}
