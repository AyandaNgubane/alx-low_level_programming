#include "main.h"

/**
 * _strncat - concatenates two strings
 *
 * @dest: destination
 * @src: string to append
 * @n: number of bytes
 * Return: the full string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < n; j++)
	{
		if (src[j] != '\0')
		{
			dest[i] = src[j];
			i++;
		}
		else
		{
			break;
		}
	}
	dest[i] = '\0';
	return (dest);
}
