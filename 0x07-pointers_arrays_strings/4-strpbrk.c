#include "main.h"

/**
 * _strpbrk - similar function to strpbrk
 *
 * @s: string to check from
 * @accept: characters to check for
 * Return: result
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				goto end;
			}
		}
	}
	end:
		return (s[i] != '\0' ? s + i: '\0');
}
