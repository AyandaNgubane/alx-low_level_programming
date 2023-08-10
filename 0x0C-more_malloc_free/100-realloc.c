#include "main.h"
#include <stdlib.h>

/**
  * _realloc - similar to realloc
  * @ptr: previously allocated memory
  * @old_size: size of previously allocated memory
  * @new_size: new size
  *
  * Return: pointer
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			return (NULL);
		return (new_ptr);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}

	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
		return (NULL);
	for (i = 0; i < old_size && i < new_size; i++)
	{
		nptr[i] = ((char *) ptr)[i];
	}
	free(ptr);
	return (new_ptr);
}
