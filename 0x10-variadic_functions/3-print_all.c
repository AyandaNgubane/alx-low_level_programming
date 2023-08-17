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

	length = _strlen(format);
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
			default:
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
/**
 * _strlen - counts length of string
 *
 * @s: string to be checked
 * Return: lenght
 */
int _strlen(char *s)
{
	int i;
	int length;

	length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}
	return (length);
}
