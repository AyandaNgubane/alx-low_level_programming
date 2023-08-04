#include "main.h"

/**
 * _isalpha - a function that checks for alphabetic character.
 *
 * @c: character
 * Return: 0 if successful
 */
int _isalpha(int c)
{
	if (((c >= 'A') && (c <= 'Z')) || ((c >= 'a') && (c <= 'z')))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
