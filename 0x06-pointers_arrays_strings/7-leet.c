#include "main.h"

/**
 * leet - encodes a string into 1337.
 * @s: string to encode.
 * Return: encoded string.
 */

char *leet(char *s)
{
	int i;
	int j;
	char numbers[] = {'4', '3', '1', '0', '7'};
	char upper[] = {'A', 'E', 'L', 'O', 'T'};
	char lower[] = {'a', 'e', 'l', 'o', 't'};

	i = 0;

	while (s[i] != '\0')
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == lower[j] || s[i] == upper[j])
				s[i] = numbers[j];
		}
		i++;
	}

	return (s);
}
