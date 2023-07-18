#include <stdio.h>
/**
 * main - print first 50 fibonacci
 *
 * Return: 0 if successful
 */
int main(void)
{
	int i;
	int a;
	int b;
	int sum;

	a = 1;
	b = 2;
	sum = 0;

	for (i = 1; i <= 50; i++)
	{
		printf("%d, ", a);
		sum = a + b;
		a = b;
		b = sum;
		if (i == 50)
			printf("%d\n", a);
	}
	return (0);
}
