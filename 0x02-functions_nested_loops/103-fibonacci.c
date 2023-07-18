#include <stdio.h>
/**
 * main - print fibonacci even numbers
 *
 * Return: 0 if successful
 */
int main(void)
{
	unsigned long a;
	unsigned long b;
	unsigned long sum;
	float tot_sum;

	a = 0;
	b = 1;

	while (1)
	{
		sum = a + b;
		if (sum > 4000000)
			break;

		if ((sum % 2) == 0)
			tot_sum += sum;

		a = b;
		b = sum;
	}
	printf("%.0f\n", tot_sum);

	return (0);
}
