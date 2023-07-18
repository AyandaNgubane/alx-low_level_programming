#include <stdio.h>
/**
 * main - print first 50 fibonacci
 *
 * Return: 0 if successful
 */
int main(void)
{
	int i;
	long int a;
	long int b;
	long int sum;

	a = 1;
	b = 2;
	sum = 0;

	for (i = 0; i < 49; i++)
	{
		printf("%ld, ", a);
		sum = a + b;
		a = b;
		b = sum;
		if (i == 48)
			printf("%ld\n", a);
	}
	return (0);
}
