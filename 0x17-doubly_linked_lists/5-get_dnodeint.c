#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a list
 * @head: head of list
 * @index: index
 * Return: node, NULL if node doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node, *temp;
	unsigned int pos = 0;

	temp = head;

	while (temp)
	{
		if (index == pos)
			return (temp);
		node = temp->next;
		pos++;
		temp = node;
	}
	return (NULL);
}
