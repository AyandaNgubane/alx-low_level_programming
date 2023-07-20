#include "main.h"

/**
 * int _isupper(int c) - a function that checks for uppercase character.
 *
 * @c: character
 * Return: 1 if c is uppercase and 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
