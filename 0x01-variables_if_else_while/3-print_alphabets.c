#include <stdio.h>

/**
 * main - This program prints the alphabets using putchar() only
 *
 * Return: 0 if successful
 */
int main(void)
{
	for (int i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}

	for (int i = 'A'; i <= 'Z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
