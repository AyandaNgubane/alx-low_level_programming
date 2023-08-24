#include "lists.h"

/**
 * print_list - prints all the elements of a list
 * @h: list
 * Return: elements
 */
size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%lu] %s\n", (unsigned long)h->len, h->str);

		h = h->next;
		nodes++;
	}

	return (nodes);
}
