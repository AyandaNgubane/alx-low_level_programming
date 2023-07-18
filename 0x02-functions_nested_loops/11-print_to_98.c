#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - a function that prints all natural numbers from
 * n to 98, followed by a new line.
 *
 * @n: value to start at
 * Return: 0 if successful
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		for (n = n; n < 99; n++)
		{
			if (n == 98)
			{
				printf("%d\n", n);
			}
			else
			{
				printf("%d, ", n);
			}
		}
	}
	else if (n > 98)
	{
		for (n = n; n > 98; n--)
		{
			if (n == 98)
			{
				printf("%d\n", n);
			}
			else
			{
				printf("%d, ", n);
			}
		}
	}
	else if (n == 98)
	{
		printf("%d\n", n);
	}
}
