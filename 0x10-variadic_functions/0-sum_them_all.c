#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - returns sum of all parameters
 *
 * @n: number of arguments
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int sum;

	va_start(args, n);

	sum = 0;
	if (n != 0)
	{
		for (i = 0; i < n; i++)
		{
			sum = sum + va_arg(args, int);
		}
		va_end(args);
		return (sum);
	}
	return (0);
}
