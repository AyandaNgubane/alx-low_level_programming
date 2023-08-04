#include "main.h"

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
