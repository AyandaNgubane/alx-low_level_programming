#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * 
 * @array: arrays
 * @size: size of array
 * @cmp: function pointer
 * Return: index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	if (size <= 0)
		return (-1);
	
	int i;

	i = 0;

	if (array != NULL && cmp != NULL)
	{
		while (i < size)
		{
			if (cmp(array[i]))
				return (i);
		}	i++;
	}
	return (-1);
}
