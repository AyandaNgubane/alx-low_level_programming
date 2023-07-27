#include "main.h"

/**
 * cap_string - capitilizes all words
 *
 * @str: string to be capitilized
 * Return: capitilized string
 */
char *cap_string(char *str)
{
	int i = 1, j, check;
	char a[] = {',', ';', '.', '!', '?', '"', '(', ')'\
		, '{', '}', '\n', '\t', ' '};

	if (str[0] > 96 && str[0] < 123)
		str[0] -= 32;

	while (str[i] != '\0')
	{
		if (str[i] > 96 && str[i] < 123)
		{
			j = 0;
			check = 0;
			while (check == 0 && j < 13)
			{
				if (str[i - 1] == a[j])
				{
					check = 1;
				}
				j++;
			}
			if (check == 1)
			{
				str[i] -= 32;
			}
		}
		i++;
	}
	return (str);
}
