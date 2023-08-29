#include "lists.h"

/**
 * print_listint - prints all elements
 * @h: list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *cursor = h;
	size_t nodes;

	nodes = 0;

	while (cursor)
	{
		printf("%d\n", cursor->n);
		nodes++;
		cursor = cursor->next;
	}
	return (nodes);
}
