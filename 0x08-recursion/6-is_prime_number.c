#include "main.h"

/**
 * is_prime_number - checks if a number is prime
 *
 * @n: number
 * Return: result
 */
int is_prime_number(int n)
{
	return (_prime(n, 2));
}
/**
 * _prime - runs through the factors 
 *
 * @a: same value as n
 * @b: checks for factors of a
 * Return: result
 */
int _prime(int a, int b)
{
	if (a % 2 == 0 && a != 2)
	{
		return (0);
	}
	if (a == 1 || a < 0)
	{
		return (0);
	}
	if (a == 2)
	{
		return (1);
	}
	if (a % b != 0 && a > b)
	{
		if (b == (a - 1))
		{
			return (1);
		}
		_prime(a, b + 1);
	}
	else
		goto end;
end:
	return (0);
}
