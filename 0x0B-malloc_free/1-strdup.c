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
	unsigned int j;

	ptr = malloc(sizeof(str));

	if (ptr == NULL || str == NULL)
	{
		return (NULL);
	}
	for (j = 0; str[j] != '\0'; j++)
	{
		ptr[j] = str[j];
	}
	return (ptr);
}
