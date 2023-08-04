#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change for an amount of money
 *
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if successful and 1 for error
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int cents;
		int total;
		int coins25;
		int coins10;
		int coins5;
		int coins2;
		int coins1;

		cents = atoi(argv[1]);
		coins25 = 0;
		coins10 = 0;
		coins5 = 0;
		coins2 = 0;
		coins1 = 0;

		if (cents < 0)
		{
			printf("0\n");
			return (0);
		}
		if (cents >= 25)
		{
			coins25 = cents / 25;
			cents = cents % 25;
		}
		if (cents >= 10 && cents < 25)
		{
			coins10 = cents / 10;
			cents = cents % 10;
		}
		if (cents >= 5 && cents < 10)
		{
			coins5 = cents / 5;
			cents = cents % 5;
		}
		if (cents >= 2 && cents < 5)
		{
			coins2 = cents / 2;
			cents = cents % 2;
		}
		if (cents == 1)
		{
			coins1 = cents;
		}
		total = coins25 + coins10 + coins5 + coins2 + coins1;
		printf("%d\n", total);
	}
	return (0);
}
