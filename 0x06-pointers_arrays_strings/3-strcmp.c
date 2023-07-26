#include "main.h"

/**
 * _strcmp - compares two strings
 *
 * @s1: first string
 * @s2: second string
 * Return: result
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int result;

	result = 0;

	for (i = 0; (s1[i] != '\0') || (s2[i] != '\0'); i++)
	{
		if (s1[i] > s2[i])
		{
			result = s1[i] - s2[i];
			break;
		}
		else if (s1[i] < s2[i])
		{
			result = s1[i] - s2[i];
			break;
		}
		else
		{
			continue;
		}
	}
	return (result);
}
