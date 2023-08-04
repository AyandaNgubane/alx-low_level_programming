#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies 2 arguments
 *
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if successful and 1 for an error
 */
int main(int argc, char *argv[])
{
	int result;
	int r;

	r = 0;

	if (argc != 3)
	{
		printf("Error\n");
		r = 1;
	}
	else
	{
		result = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", result);
	}
	return (r);
}
