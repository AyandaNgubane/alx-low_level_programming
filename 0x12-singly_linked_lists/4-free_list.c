#include "lists.h"

/**
  * free_list - frees a linked list.
  * @head: list
  *
  * Return: void
  */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
	free(head);
}
