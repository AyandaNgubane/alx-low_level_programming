#include "main.h"

/**
 * void print_square(int size) - a function that prints a square, followed by a new line.
 *
 * @size: size of square
 */
void print_square(int size)
{
	int i;
	int j;

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size; j++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
}
