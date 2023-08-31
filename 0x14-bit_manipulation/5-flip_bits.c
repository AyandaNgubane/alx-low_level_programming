#include "main.h"

/**
 * flip_bits - returns number of bits needed to be
 * flipped to get from one number to another
 * @n: first number
 * @m: second number
 * Return: count of bits changed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int count;

	for (count = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			count++;
	}
	return (count);
}
