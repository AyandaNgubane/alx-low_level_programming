#include <stdio.h>
#include <math.h>

/**
  * main - Prints the largest prime factor of number 
  *
  * Return: 0 if successful
  */
int main(void)
{
	long i, factor;
	long number = 612852475143;
	double square = sqrt(number);

	for (i = 1; i <= square; i++)
	{
		if (number % i == 0)
		{
			factor = number / i;
		}
	}
	printf("%ld\n", factor);
	return (0);
}
