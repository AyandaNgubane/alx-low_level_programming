#include "lists.h"

/**
 * free_listint_safe - frees a linked list.
 * @h: head of a list.
 *
 * Return: size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t nodes = 0;
	listp_t *new, *xtr, *pnt;
	listint_t *tmp;

	pnt = NULL;
	while (*h != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->ptr = (void *)*h;
		new->next = pnt;
		pnt = new;

		xtr = pnt;

		while (xtr->next != NULL)
		{
			xtr = xtr->next;
			if (*h == xtr->ptr)
			{
				*h = NULL;
				_free2(&pnt);
				return (nodes);
			}
		}

		tmp = *h;
		*h = (*h)->next;
		free(tmp);
		nodes++;
	}

	*h = NULL;
	_free2(&pnt);
	return (nodes);
}
/**
 * _free2 - frees a linked list
 * @head: head of a list
 *
 * Return: void
 */
void _free2(listp_t **head)
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
