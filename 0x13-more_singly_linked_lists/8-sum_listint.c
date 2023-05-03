#include "lists.h"

/**
 * sum_listint - sums data in  l.list
 * @head: head node
 * Return: sum result
 */
int sum_listint(listint_t *head)
{
	listint_t *temp_node = head;
	int numsum = 0;

	while(temp_node)
	{
		numsum += (*temp_node).n;
		temp_node = (*temp_node).next;
	}
	return (numsum);
}
