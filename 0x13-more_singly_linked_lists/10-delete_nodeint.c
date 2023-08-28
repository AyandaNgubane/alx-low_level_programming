#include "lists.h"
/**
 * delete_nodeint_at_index - deletes node at index
 * @head: address of header
 * @index: index of node
 * Return: 1 if successful, -1 if it fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *new = *head;
	unsigned int node;

	if (new == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(new);
		return (1);
	}

	for (node = 0; node < (index - 1); node++)
	{
		if (new->next == NULL)
			return (-1);

		new = new->next;
	}
	tmp = new->next;
	new->next = tmp->next;
	free(tmp);
	return (1);
}
