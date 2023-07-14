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
		if (i != 57)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
