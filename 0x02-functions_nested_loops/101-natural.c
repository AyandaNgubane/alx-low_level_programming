#include <stdio.h>
/**
 * main -  Write a program that computes and prints the sum of all
 * the multiples of 3 or 5 below 1024
 *
 * Return: 0 if successful
 */
int main(void)
{
	int x;
	int y;
	int sum;

	x = 1024;
	sum = 0;
	
	for (y = 0; y < x; y++)
	{
		if ((y % 3 == 0) || (y % 5 == 0))
		{
			sum = sum + y;
		}
	}
	printf("%d\n", sum);
	return (0);
}
