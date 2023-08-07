#include <stdlib.h>
#include "main.h"

/**
 * _strdup - works similar to strdup
 *
 * @str: string to be checked
 * Return: pointer if successful or NULL if it fails
 */
char *_strdup(char *str)
{
	char *ptr;
	unsigned int j, length;

	length = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	for (j = 0; str[j] != '\0'; j++)
	{
		length++;
	}

	ptr = malloc(length);

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (j = 0; str[j] != '\0'; j++)
	{
		ptr[j] = str[j];
	}
	return (ptr);
}
