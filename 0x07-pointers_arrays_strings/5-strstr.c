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

	i = 0;

	while (*haystack != '\0')
	{
		while (*haystack == *needle && *haystack != '\0' && *needle != '\0')
		{
			haystack++;
			needle++;
			i++;
		}
		if (*needle == '\0')
		{
			return (haystack - i);
		}
		haystack -= (i - 1);
		needle -= i;
	}
	return ("NULL");
}
