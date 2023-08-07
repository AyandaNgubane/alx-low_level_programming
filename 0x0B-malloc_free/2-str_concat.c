#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings
 *
 * @s1: first string
 * @s2: string to concatenate to s1
 * Return: pointer if successful or NULL if it fails
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	unsigned int j, k, length;

	length = 0;
	k = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (j = 0; s1[j] != '\0'; j++)
	{
		length++;
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		length++;
	}

	ptr = malloc(length + 1);

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (j = 0; s1[j] != '\0'; j++)
	{
		ptr[j] = s1[j];
	}
	for (j = j; j < length; j++)
	{
		ptr[j] = s2[k];
		k++;
	}
	return (ptr);
}
