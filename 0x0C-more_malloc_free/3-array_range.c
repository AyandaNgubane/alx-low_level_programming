#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an arry of integers
 *
 * @min: first number
 * @max: last number
 * Return: array
 */
int *array_range(int min, int max)
{
	int *s;
	int i, range;

	range = max - min + 1;

	if (min > max)
	{
		return (NULL);
	}
	s = malloc(sizeof(int) * range);
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < range; i++)
	{
		s[i] = min;
		min++;
	}
	return (s);
}
