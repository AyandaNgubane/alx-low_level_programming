#include "main.h"
#include <stdlib.h>

/**
 * rev_string - reverses a string
 *
 * @s: string to be checked
 * Return: void
 */
void rev_string(char *s)
{
	int i;
	int length;
	char c[500];

	length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		c[i] = s[i];
		length++;
	}
	for (i = 0; i <= length - 1; i++)
	{
		s[i] = c[length - 1 - i];
	}
}
