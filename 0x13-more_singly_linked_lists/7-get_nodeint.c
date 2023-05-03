#include "lists.h"

/**
 * get_nodeint_at_index - gets nth of l.list
 * @head: head node
 * @index: node index
 * Return: nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp_node = head;
	unsigned int num;

	for (num = 0; temp_node && num < index; num++)
	{
		temp_node = (*temp_node).next;
	}
	return (temp_node ? temp_node : NULL);
}
