#include "main.h"

/**
 * reverse_array - reverses the content of an array
 *
 * @a: an array
 * @n: number of elements
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;
	int k;
	int temp[n];
	int b[n];

	j = 0;

	for (k = 0; k < n; k++)
	{
		b[k] = a[k];
	}
	for (i = n - 1; i >= 0; i--)
	{
		if (i < (n / 2))
		{
			a[j] = b[i];
			j++;
		}
		else
		{
			temp[j] = a[i];
			a[j] = temp[j];
			j++;
		}
	}
}
