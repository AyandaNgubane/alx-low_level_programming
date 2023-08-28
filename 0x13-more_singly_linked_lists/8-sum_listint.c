#include "lists.h"

/**
 * sum_listint - returns the sum of all data of list
 * @head: list
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;

	if (head)
	{
		while (head)
		{
			sum = sum + head->n;
			head = head->next;
		}
	}
	return (sum);
}
