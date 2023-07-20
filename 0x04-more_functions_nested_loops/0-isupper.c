#include "main.h"

/**
 * int _isupper(int c) - a function that checks for uppercase character.
 *
 * @c: character
 * Return: 1 if c is uppercase and 0 otherwise
 */
int _isupper(int c)
{
	int i;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (i == c)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
}
