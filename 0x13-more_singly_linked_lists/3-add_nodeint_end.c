#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end
 * @head: address of first node
 * @n: element of node
 * Return: address of new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *ptr;

	if (head)
	{
		new = malloc(sizeof(listint_t));
		if (new == NULL)
			return (NULL);

		new->n = n;
		new->next = NULL;

		if (*head == NULL)
		{
			*head = new;
			return (*head);
		}
		else
		{
			ptr = *head;

			while (ptr->next)
				ptr = ptr->next;

			ptr->next = new;
			return (ptr);
		}
	}
	return (NULL);
}
