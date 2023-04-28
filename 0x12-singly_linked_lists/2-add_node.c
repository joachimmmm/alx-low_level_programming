#include "lists.h"

/**
 * add_node - adds node to the beginning of linked list
 * @head: head of linked list
 * @str: data part of node
 * Return: updated list
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int index = 0;
	list_t *newNode;

	while (str[index])
	{
		index++;
	}
	newNode = malloc(sizeof(list_t));
	if (!newNode)
	{
		return (NULL);
	}
	(*newNode).str = strdup(str);
	(*newNode).len = index;
	(*newNode).next = (*head);
	(*head) = newNode;

	return (*head);
}

