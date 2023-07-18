#include "main.h"

/**
 * main - Write a function that computes the absolute value of an integer.
 *
 * Return: 0 if successful
 */
int _abs(int n)
{
	if(n < 0)
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
