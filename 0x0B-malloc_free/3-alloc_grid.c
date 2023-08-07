#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - returns pointer to a 2d array
 *
 * @width: width of array
 * @height: height of array
 * Return: pointer if successful or NULL if it fails
 */
int **alloc_grid(int width, int height)
{
	int i, j, k;
	int **ptr;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(int *) * height);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(sizeof(int) * width);
		if (ptr[i] == NULL)
		{
			for (k = 0; k < i; k++)
			{
				free(ptr[k]);
			}
			free(ptr);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			ptr[i][j] = 0;
		}
	}
	return (ptr);
}
