#include "main.h"

/**
 * puts_half - prints half of a string
 *
 * @str: string to be checked
 * Return: void
 */
void puts_half(char *str)
{
	int i;
	int j;
	int n;
	int length;

	length = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		length++;
	}

	n = (length - 1) / 2;

	if ((length - 1) % 2 != 0)
	{
		for (j  = length - 1 - n; str[j] != '\0'; j++)
		{
			_putchar(str[j]);
		}
	}
	else
	{
		for (j = length - n; str[j] != '\0'; j++)
		{
			_putchar(str[j]);
		}
	}
	_putchar('\n');
}
