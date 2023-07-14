#include <stdio.h>

/**
 * main - This program prints the alphabets
 * excluding q and e using putchar() only
 *
 * Return: 0 if successful
 */
int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if ((i != 'q') && (i != 'e'))
		{
			putchar(i);
		}
	}
	putchar('\n');
	return (0);
}
