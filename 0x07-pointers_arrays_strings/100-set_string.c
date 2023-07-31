#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 *
 * @s: pointer of a pointer
 * @to: first pointer, pointing to a char
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
