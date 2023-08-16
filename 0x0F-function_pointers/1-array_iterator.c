#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - executes function given as parameter
 * on each element of an array
 * @array: arrays
 * @size: size of array
 * @action: function pointer
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	i = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}	
}
