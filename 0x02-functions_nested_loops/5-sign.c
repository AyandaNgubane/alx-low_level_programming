#include "main.h"

/**
 * print_sign - Write a function that prints the sign of a number.
 *
 * @n: value
 * Return: 0 if successful
 */
int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return (0);
		_putchar('\n');
	}
	else if (n > 0)
	{
                _putchar('+');
                return (1);
                _putchar('\n');
        }
	else if (n < 0)
	{
                _putchar('-');
                _putchar('\n');
		return (-1);
        }
}
