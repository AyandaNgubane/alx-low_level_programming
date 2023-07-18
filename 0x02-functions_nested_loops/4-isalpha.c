#include "main.h"

/**
 * _isalpha - a function that checks for alphabetic character.
 *
 * @c: character
 * Return: 0 if successful
 */
int _isalpha(int c)
{
	int k;
	
	for (k = 0; k <= 127; k++)
	{
		int i;
		int j;

		i = 'A';
		j = 'a';

		while (j < 123)
		{
			if (c == j)
			{
				return (1);
			}
			j++;
		}
		while (i < 91)
		{
			if (c == i)
			{
				return(1);
			}
			i++;
		}
		if (c != i && c != j)
		{
			return (0);
		}
	}
}
