#include "lists.h"

/**
 * add_nodeint - adds a node at the beginning
 * @head: address of last node
 * @n: element of node
 * Return: address of last node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	if (head != NULL)
	{
		new->n = n;
		new->next = *head;
		*head = new;
		return (new);
	}
	return (NULL);
}
