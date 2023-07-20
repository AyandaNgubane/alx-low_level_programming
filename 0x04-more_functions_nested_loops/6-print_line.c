#include "main.h"

/**
 * void print_line(int n) - a function that draws a straight line in the terminal.
 *
 * @n: number of _
 */
void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
