#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an arrar of chars
 *
 * @size: size of array
 * @c: char to be used
 * Return: pointer if successful or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int j;

	ptr = malloc(sizeof(*ptr) * size);

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < size; j++)
	{
		ptr[j] = c;
	}
	return (ptr);
}
