#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node
 * @head: list
 * @index: index
 * Return: nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	node = 0;

	if (head)
	{
		while (head)
		{
			if (node == index)
				return (head);

			head = head->next;
			node++;
		}
	}
	return (NULL);
}
