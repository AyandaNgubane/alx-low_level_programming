#include "main.h"

/**
 * print_alphabet - This program should print out the alphabets
 * using a function prototype
 *
 * Return: 0 if successful
 */
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}	
	_putchar('\n');
}
