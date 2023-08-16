#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 *
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if successful
 */
void print_opcodes(int c);
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
	print_opcodes(bytes);
	return (0);
}
void print_opcodes(int c)
{
	unsigned char *ptr;
	int i;

	ptr = (unsigned char *)print_opcodes;

	for (i = 0; i < c; i++)
	{
		printf("%02x ", ptr[i]);
	}
	printf("\n");
}
