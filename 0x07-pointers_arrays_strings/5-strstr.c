#include "main.h"

/**
 * _strstr - similar function to strstr
 *
 * @haystack: string to check from
 * @needle: substring to check for
 * Return: result
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	for (i = 0; needle[i] != '\0'; i++)
	{
		for (j = 0; haystack[j] != '\0'; j++)
		{
			if (needle[i] == haystack[j])
			{
				tmp[k] = needle[i];
				k++;
				break;
			}
		}
	}
	end:
		return (s[i] != '\0' ? s + i: '\0');
}
