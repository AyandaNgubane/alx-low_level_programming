#include "main.h"

/**
 * print_last_digit - a function that prints the last digit of a number
 *
 * @n: value
 * Return: 0 if successful
 */
int print_last_digit(int n)
{
	if (n < 0)
	{
		n = -(n);
	}

	int number;

	number = n % 10;

	_putchar(number + '0');
	return (number);
}
