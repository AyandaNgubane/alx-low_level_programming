#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers
 *
 * @separator: separator
 * @n: number of arguments
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int j;

	if (n > 0)
	{
		va_start(args, n);

		for (i = 0; i < n; i++)
		{
			j = va_arg(args, int);
			printf("%d", j);
			if (separator != NULL)
				printf("%s", separator);
		}
		va_end(args);
	}
	printf("\n");
}
