#include <stdlib.h>
#include "main.h"

/**
 * argstostr - concatenates all arguments
 *
 * @ac: argument count
 * @av: argument vector
 * Return: the arguments
 */
char *argstostr(int ac, char **av)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
