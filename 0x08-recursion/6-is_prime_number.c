#include "main.h"

/**
 * is_prime_number - checks if a number is prime
 *
 * @n: number
 * Return: result
 */
int is_prime_number(int n)
{
	return (_prime(n, 1));
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
	if (a <= 1)
		return (0);

	if (a % b == 0 && b > 1)
		return (0);

	if ((a / b) < b)
		return (1);

	return (_prime(a, b + 1));
}
