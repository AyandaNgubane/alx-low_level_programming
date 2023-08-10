#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 *
 * @s1: string to concatenate to
 * @s2: string to concatenate with
 * @n: number of bytes
 * Return: string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i, l1, l2, j;

	l1 = 0, l2 = 0;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s2[i] != '\0'; i++)
		l2++;
	for (i = 0; s1[i] != '\0'; i++)
		l1++;
	if (n >= l2)
		n = l2;
	s = malloc((sizeof(char) * l1) + (sizeof(char) * n) + 1);
	if (s == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		s[i] = s1[i];
	for (j = 0; j < n; j++)
	{
		s[i] = s2[j];
		i++;
	}
	s[i] = '\0';
	return (s);
}
