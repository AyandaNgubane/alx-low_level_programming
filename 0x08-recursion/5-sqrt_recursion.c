#include "main.h"

/**
 * _sqrt_recursion - works similar to sqrt
 *
 * @n: number
 * Return: result
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
/**
 * _sqrt - checks for the square root of n
 *
 * @a: same value as n
 * @b: checks for squares of a
 * Return: result
 */
int _sqrt(int a, int b)
{
	if (b > a)
	{
		return (-1);
	}

	if (b * b != a)
	{
		return (_sqrt(a, b + 1));
	}
	return (b);
}
