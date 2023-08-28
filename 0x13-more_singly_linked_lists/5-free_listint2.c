#include "lists.h"

/**
  * free_listint2 - frees a linked list.
  * @head: list
  *
  * Return: void
  */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head)
	{
		while (*head)
		{
			tmp = *head;
			head = *head->next;
			free(tmp);
		}
	}
	else
		return;

	free(*head);
	head = NULL;
}
