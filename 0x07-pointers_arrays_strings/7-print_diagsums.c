#include "main.h"
#include <stdio.h>

/**
  * print_diagsums - Print the sum of two diagonals of square matrix
  *
  * @a: the matrix
  * @size: the size
  *
  * Return: void
  */
void print_diagsums(int *a, int size)
{
	int i;
	int sum;
	int sum1;

	sum = 0;
	sum1 = 0;

	for (i = 0; i < size; i++)
	{
		sum += a[(size + 1) * i];
		sum1 += a[(size - 1) * (i + 1)];
	}

	printf("%d, %d\n", sum, sum1);
}
