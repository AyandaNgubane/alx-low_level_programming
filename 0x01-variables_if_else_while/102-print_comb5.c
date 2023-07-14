#include <stdio.h>
/**
 * main - This program prints all possible combinations of two two-digits using putchar()
 *
 * Return: 0 if successfull
 */
int main(void)
{
	int a, b, c, d, e, f;

	for (e = 0; e < 100; e++)
	{
		a = e / 10;
		b = e % 10;

		for (f = 0; f < 100; f++)
		{
			c = f / 10;
			d = f % 10;

			if (a < c || (a == c && b < d))
			{
				putchar(a + '0');
				putchar(b + '0');
				putchar(32);
				putchar(c + '0');
				putchar(d + '0');

				if (!(a == 9 && b == 8))
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar(10);

	return (0);
}
