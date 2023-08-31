#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to string of binary number
 * Return: converted number, 0 if string contains characters
 * that are not 1 or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int val = 0, count = 0;
	int i = 0;

	if (b == NULL)
		return (0);
	while (b[i])
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		i++;
	}
	for (i = i - 1; i >= 0; i--)
	{
		if (b[i] != '0')
		{
			val += 1  << count;
		}
		count++;
	}
	return (val);
}
