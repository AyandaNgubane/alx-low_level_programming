#include "main.h"

/**
 * main - This program should print out the alphabets 10 times
 * using a function prototype
 *
 * Return: 0 if successful
 */
void print_alphabet_10x(void)
{
	int i;
	int j;

	j = 0;

	while(j < 10)
	{
		for(i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}	
		_putchar('\n');
		j++;
	}
}
