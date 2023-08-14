#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - new dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: details
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *details;

	details = malloc(sizeof(struct dog));

	if (details == 0 || name == 0 || owner == 0)
	{
		return (0);
	}
	details->name = _strdup(name);
	if (details->name == 0)
	{
		free(details);
		return (0);
	}
	details->age = age;
	details->owner = _strdup(owner);
	if (details->owner == 0)
	{
		free(details);
		free(details->name);
		return (0);
	}
	return (details);
}
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

	ptr = malloc(length + 1);

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (j = 0; str[j] != '\0'; j++)
	{
		ptr[j] = str[j];
	}
	ptr[j] = '\0';
	return (ptr);
}
