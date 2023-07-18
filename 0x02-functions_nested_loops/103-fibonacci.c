#include <stdio.h>
/**
 * main - print fibonacci even numbers
 *
 * Return: 0 if successful
 */
int main(void)
{
	int i;
	long int a;
	long int b;
	long int sum;
	long int even;

	a = 1;
	b = 2;
	sum = 0;
	even = 0;

	for (i = 0; i < 49; i++)
	{
		if ((b % 2 == 0) && (b <= 4000000))
		{
			even = even + b;
		}
		printf("%ld, ", a);
		sum = a + b;
		a = b;
		b = sum;
		if (i == 48)
			printf("%ld\n", a);
	}
	return (0);
}
