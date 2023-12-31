#include "main.h"

/**
 * _strchr - similar function to strchr
 *
 * @s: string to be checked
 * @c: character to be checked
 * Return: results or NULL if not found
 */
char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			break;
		}
	}
	return (s[i] == c ? (s + i) : '\0');
}
