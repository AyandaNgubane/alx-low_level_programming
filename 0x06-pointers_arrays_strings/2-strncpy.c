#include "main.h"

/**
 * _strncpy - copies a string
 *
 * @dest: destination
 * @src: string to copy
 * @n: number of bytes
 * Return: the full string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	j = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
