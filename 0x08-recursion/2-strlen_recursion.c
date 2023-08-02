#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 *
 * @s: string to be checked
 * Return: length
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _print_rev_recursion(s + 1));
	}
	return (0);

}
