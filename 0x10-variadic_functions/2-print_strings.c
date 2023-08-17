#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - prints strings
 *
 * @separator: separator
 * @n: number of arguments
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *j;

	if (n > 0)
	{
		va_start(args, n);

		for (i = 0; i < n; i++)
		{
			j = va_arg(args, char*);
			if (j == NULL)
				printf("(nil)");
			else
				printf("%s", j);
			if (separator != NULL)
				printf("%s", separator);
		}
		va_end(args);
	}
	printf("\n");
}
