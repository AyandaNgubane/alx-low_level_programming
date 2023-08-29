#include "lists.h"

/**
 * find_listint_loop - finds loop in list
 * @head : pointer to head of linked list
 * Return: pointer to node where loop starts,
 * NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *node, *node1;

	if (head == NULL || head->next == NULL)
		return (NULL);

	node = head->next;
	node1 = (head->next)->next;

	while (node1)
	{
		if (node1 == node)
		{	
			node = head;

			while (node1 != node)
			{
				node = node->next;
				node1 = node1->next;
			}
			return (node);
		}
		node = node->next;
		node1 = (node1->next)->next;
	}
	return (NULL);
}
