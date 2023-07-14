#include <stdio.h>

/**
 * main - This program prints the alphabets in reverse using putchar() only
 *
 * Return: 0 if successful
 */
int main(void)
{
	int i;

	for (i = 'z'; i >= 'z'; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
