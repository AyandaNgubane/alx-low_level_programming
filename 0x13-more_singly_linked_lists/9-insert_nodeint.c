#include "lists.h"

/**
  * insert_nodeint_at_index - inserts a node at given position
  * @head: address of head
  * @idx: index
  * @n: data
  *
  * Return: address of new node
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr, *new;
	unsigned int cmp;

	cmp = 1;

	if (head)
	{
		new = malloc(sizeof(listint_t));
		if (new == NULL)
			return (NULL);

		new->n = n;
		if (idx > 0)
		{
			ptr = *head;
			while (ptr)
			{
				if (idx == cmp)
				{
					new->next = ptr->next;
					ptr->next = new;
					return (new);
				}
				ptr = ptr->next;
				cmp++;
			}
			if (cmp < idx)
				return (NULL);
		}
		else
		{
			new->next = *head;
			*head = new;
		}
		return (new);
	}
	return (NULL);
}
