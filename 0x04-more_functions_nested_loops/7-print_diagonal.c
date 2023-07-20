#include "main.h"

/**
 * print_diagonal() - draws diagonal line
 *
 * @n: number of diagonal lines
 */
void print_diagonal(int n)
{
	int i, j;

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= (i - 1); j++)
		{
			_putchar(32);
		}
		_putchar(92);
		_putchar('\n');
	}
	_putchar('\n');
}
