#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds new node at the beginning
 * @head: address of first node
 * @str: data of new node
 * Return: address of new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	if (head != NULL && str != NULL)
	{
		new = malloc(sizeof(list_t));

		if (new == NULL)
			return (NULL);
		new->str = strdup(str);
		new->len = _strlen(str);
		new->next = *head;
		*head = new;
		return (new);
	}
	return (0);
}
/**
 * _strlen - counts length of string
 *
 * @s: string to be checked
 * Return: lenght
 */
int _strlen(char *s)
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
