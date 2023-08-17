#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include "variadic_functions"

/**
 * print_all - prints anything
 *
 * @format: types of arguments
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i;
	char *str;
	int length;

	length = strlen(format);
	va_start(args, format);
	i = 0;

	while (i < length)
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				break;
			default :
				i++;
				continue;
		}
		if (i != length - 1)
		{
			printf(", ");
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
