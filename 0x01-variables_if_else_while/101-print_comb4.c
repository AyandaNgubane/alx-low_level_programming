#include <stdio.h>
/**
 * main - This program prints all possible combinations of three digits using putchar()
 *
 * Return: 0 if successfull
 */
int main(void)
{
	int a, b, c, d;

	a = 0;

	while (a < 1000)
	{
		b = a / 100;
		c = (a / 10) % 10;
	       	d = a % 10

		if ((b < c) && c < d)
		{
			putchar(c + '0');
			putchar(b + '0');
			putchar(d + '0');

			if (a < 700)
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
