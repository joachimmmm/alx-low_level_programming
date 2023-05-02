#include "lists.h"

/**
 * add_nodeint - adds a new node
 * @head: node 2 be added
 * @n: data
 * Return: address of new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (!newNode)
	{
		return (NULL);
	}
	(*newNode).n = n;
	(*newNode).next = *head;
	*head = newNode;

	return (newNode);
}
