#include "main.h"

/**
 * print_more_numbers - a function that prints 10 times the numbers, from 0 to 14, followed by a new line
 *
 */
void print_more_numbers(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		int i;

		i = 0;

		while (i < 15)
		{
			if (i > 9)
			{
				int k;

				k = '1';

				_putchar(k);
			}
			int j;
            
			j = i % 10;
            
			_putchar(j + '0');
			i++;
		}
		_putchar('\n');
	}
}
