#include "main.h"

/**
 * print_square - a function that prints a square,
 * followed by a new line.
 *
 * @size: size of square
 */
void print_square(int size)
{
	int i;

	for (i = 1; i <= size; i++)
	{
		int j;

		for (j = 1; j <= size; j++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
}
