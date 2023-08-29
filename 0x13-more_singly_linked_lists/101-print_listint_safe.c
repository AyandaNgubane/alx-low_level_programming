#include "lists.h"

/**
 * print_listint_safe - prints a linked list.
 * @head: head of a list.
 *
 * Return: number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes = 0;
	listp_t *new, *xtr, *pnt;

	pnt = NULL;
	while (head != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->ptr = (void *)head;
		new->next = pnt;
		pnt = new;

		xtr = pnt;

		while (xtr->next != NULL)
		{
			xtr = xtr->next;
			if (head == xtr->ptr)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				_free(&pnt);
				return (nodes);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		nodes++;
	}

	_free(&pnt);
	return (nodes);
}
/**
 * _free - frees a linked list
 * @head: head of a list
 *
 * Return: void
 */
void _free(listp_t **head)
{
	listp_t *new, *tmp;

	if (head != NULL)
	{
		new = *head;
		while ((tmp = new) != NULL)
		{
			new = new->next;
			free(tmp);
		}
		*head = NULL;
	}
}
