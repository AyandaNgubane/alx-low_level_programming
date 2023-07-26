#include "main.h"

/**
 * string_toupper - changes all lowercase to uppercase
 *
 * @str: string to change
 * Return: uppercase string
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = (str[i] - '0') + 16;
		}
	}
	return (str);
}
