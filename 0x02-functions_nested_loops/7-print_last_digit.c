#include "main.h"

/**
 * main - Write a function that prints the last digit of a number
 *
 * Return: 0 if successful
 */
int print_last_digit(int n)
{
	if(n < 0)
	{
		n = -(n);
	}

	int last_digit;

	last_digit = n % 10;

	_putchar(last_digit + '0');
	return (last_digit);
}
