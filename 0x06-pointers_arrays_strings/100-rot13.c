#include "main.h"

/**
 * rot13 - encodes a string using rot13.
 * @s: string to be encoded
 * Return: encoded string
 */

char *rot13(char *s)
{
	int i = 0, j = 0;
	char rot13[] = "NnOoPpQqRrSsTtUuVvWwXxYyZzAaBbCcDdEeFfGgHhIiJjKkLlMm";
	char alpha[] = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz";

	while (s[i] != '\0')
	{
		do {
			if (s[i] == alpha[j])
			{
				s[i] = rot13[j];
				break;
			}
			j++;
		} while (alpha[j] != '\0');
		j = 0;
		i++;
	}

	return (s);
}
