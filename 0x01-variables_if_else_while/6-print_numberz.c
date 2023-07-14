#include <stdio.h>

/**
 * main - This program prints the base10 numbers using putchar() only
 *
 * Return: 0 if successful
 */
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
