#include <stdio.h>
/**
 * main - This program prints all possible combinations
 * of two digits using putchar()
 *
 * Return: 0 if successfull
 */
int main(void)
{
	int a, b, c;

	a = 0;

	while (a < 100)
	{
		b = a % 10;
		c = a / 10;

		if (c < b)
		{
			putchar(c + '0');
			putchar(b + '0');

			if (a < 89)
			{
				putchar(44);
				putchar(32);
			}
		}

		a++;
	}
	putchar('\n');
	return (0);
}
