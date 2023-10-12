#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a list
 * @head: head of node
 * @n: data
 * Return: address of element, or NULL if failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;

	if (*head != NULL)
		(*head)->prev = new;
	*head = new;
	return (new);
}
