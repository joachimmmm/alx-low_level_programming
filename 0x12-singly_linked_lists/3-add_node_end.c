#include "lists.h"

/**
 * add_node_end - adds a node to the end of linked list
 * @head: head of linked list
 * @str: new str
 * Return: new tail node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int index = 0;
	list_t *tailnode;
	list_t *temporary = *head;

	while (str[index])
	{
		index++;
	}
	tailnode = malloc(sizeof(list_t));
	if (!tailnode)
	{
		return (NULL);
	}
	(*tailnode).str = strdup(str);
	(*tailnode).len = index;
	(*tailnode).next = NULL;
	if (*head == NULL)
	{
		*head = tailnode;
		return (tailnode);
	}
	while ((*temporary).next)
	{
		temporary = (*temporary).next;
	}
	(*temporary).next = tailnode;
	return (tailnode);
}
