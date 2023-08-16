#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 *
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	int bytes;

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	unsigned char *ptr;
	int i;

	ptr = (unsigned char *)main;

	for (i = 0; i < bytes; i++)
	{
		printf("%02x ", ptr[i]);
	}
	printf("\n");
	return (0);
}
/**
 * print_opcodes - prints opcodes
 *
 * @c: number of bytes
 * void print_opcodes(int c)
 * {
 *	unsigned char *ptr;
 *	int i;
 *
 *	ptr = (unsigned char *)main;
 *
 *	for (i = 0; i < c; i++)
 *	{
 *		printf("%02x ", ptr[i]);
 *	}
 *	printf("\n");
 * }
 */
