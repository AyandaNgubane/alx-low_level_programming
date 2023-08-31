#include "main.h"

/**
 * clear_bit - sets value of bit to 0 at given index.
 * @n: pointer of number
 * @index: index of bit
 *
 * Return: 1 if successfull, -1 otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n &= (~(1 << index));
	return (1);
}
