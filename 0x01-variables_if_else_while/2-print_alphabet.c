#include <stdio.h>

/**
 * main - This program prints the alphabets using putchar() only
 *
 * Return: 0 if successful
 */
int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
