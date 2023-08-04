#include "main.h"

/**
 * _strspn - similar function to strspn
 *
 * @s: initial segment
 * @accept: string to check against
 * Return: length
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int length;

	length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				length++;
				break;
			}
			else
			{
				continue;
			}
		}
		if (s[i] != accept[j])
		{
			break;
		}
	}
	return (length);
}
