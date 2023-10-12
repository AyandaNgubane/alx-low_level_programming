#include "lists.h"

/**
 * sum_dlistint -  returns the sum of all the data (n) of a list
 * @head: head of the list
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *temp, *node;

	temp = head;

	while (temp)
	{
		sum = sum + temp->n;
		node = temp->next;
		temp = node;
	}
	return (sum);
}
