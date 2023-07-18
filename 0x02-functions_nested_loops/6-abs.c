#include "main.h"

/**
 * _abs - a function that computes the absolute value of an integer.
 *
 * @n: the value
 *
 * Return: 0 if successful
 */
int _abs(int n)
{
	if (n < 0)
	{
		int a;

		a = -(n);

		return (a);
	}
	else
	{
		return (n);
	}
}
