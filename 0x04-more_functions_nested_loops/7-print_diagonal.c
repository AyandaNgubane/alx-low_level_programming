#include "main.h"

/**
 * print_diagonal - a function that
 * draws a diagonal line
 * on the terminal.
 *
 * @n: number of diagonal lines
 */
void print_diagonal(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		int j;

		for (j = 1; j <= (i - 1); j++)
		{
			_putchar(32);
		}
		_putchar(92);
		_putchar('\n');
	}
	_putchar('\n');
}
