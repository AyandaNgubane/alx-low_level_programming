#include "lists.h"

/**
 * listint_len - returns number of nodes
 * @h: list
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes;

	nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
