#include "main.h"

/**
 * swap_int - swaps values of 2 integers
 *
 * @a: variable to be swapped
 * @b: variable to be swapped
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
