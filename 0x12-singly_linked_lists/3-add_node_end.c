#include "lists.h"

/**
 * add_node_end - adds new node at the end
 * @head: address of first node
 * @str: data of new node
 * Return: address of new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *ptr;

	ptr = *head;

	new = malloc(sizeof(list_t));
	if (new == NULL || str == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	else
	{
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = new;
	}
	return (ptr);
}
/**
 * _strlen - counts length of string
 *
 * @s: string to be checked
 * Return: lenght
 */
int _strlen(const char *s)
{
	int i;
	int length;

	length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}
	return (length);
}
