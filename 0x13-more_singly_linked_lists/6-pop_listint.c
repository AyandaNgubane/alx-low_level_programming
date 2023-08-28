#include "lists.h"

/**
 * pop_listint - deletes the head node
 * @head: address of head
 * Return: head's data
 */
int pop_listint(listint_t **head)
{
	listint_t *new;
	int data;

	data = 0;

	if (*head != NULL)
	{
		data = *head->n;
		new = *head->next;
		free(*head);
		*head = new;
	}
	return (data);
}
