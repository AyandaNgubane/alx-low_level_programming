#include <stdio.h>

/**
 * main - This program prints the base16 numbers using putchar() only
 *
 * Return: 0 if successful
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}

	for (int i = 'a'; i <= 'f'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
