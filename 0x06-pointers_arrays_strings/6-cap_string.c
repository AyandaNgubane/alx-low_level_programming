#include "main.h"

/**
 * cap_string - capitilizes all words
 *
 * @str: string to be capitilized
 * Return: capitilized string
 */
char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
		{
			if ((str[i + 1] >= 'a') && (str[i + 1] <= 'z'))
			{
				str[i + 1] = (str[i + 1] - '0') + 16;
			}
		}
		else if (str[i] == '.' && str[i + 1] != ' ')
		{
			if (str[i + 1] != '\n' && str[i + 1] != '\t')
			{
				str[i + 1] = (str[i + 1] - '0') + 16;
			}
		}
		else if (str[i] == '\n' || str[i] == '\t')
		{
			if (str[i + 1] != '\0')
			{
				str[i + 1] = (str[i + 1] - '0') + 16;
			}
		}
	}
	return (str);
}
