#include "main.h"

/**
 * main - Write a function that computes the absolute value of an integer.
 *
 * Return: 0 if successful
 */
void jack_bauer(void)
{
	int hours;

	for(hours = 0; hours < 24; hours++)
	{
		int minutes;

		while(hours < 10)
		{
			for (minutes = 0; minutes < 60; minutes++)
			{
				while(minutes < 10)
				{
					_putchar('0');
					_putchar(hours + '0');
					_putchar(':');
					_putchar('0');
					_putchar(minutes + '0');
					_putchar('\n');
					minutes++;
				}
				while(minutes > 9)
				{
					_putchar('0');
					_putchar(hours + '0');
					_putchar(':');
					_putchar(minutes + '0');
					_putchar('\n');
					minutes++;
				}
			}
		}
		while(hours > 9)
		{
			for (minutes = 0; minutes < 60; minutes++)
			{
				while(minutes < 10)
				{
					_putchar(hours + '0');
					_putchar(':');
					_putchar('0');
					_putchar(minutes + '0');
					_putchar('\n');
					minutes++;
				}
				while(minutes > 9)
				{
					_putchar(hours + '0');
					_putchar(':');
					_putchar(minutes + '0');
					_putchar('\n');
					minutes++;
				}
			}
		}
	}
}
