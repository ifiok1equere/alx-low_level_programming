#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function prints the sum of the 2 diagonals of a sqaure
 * matrix.
 *
 * @a: pointer to an array of size 8 columns.
 * @size: the number of square matrix rows and columns.
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i = 0, j = size - 1, sum = 0, sum1 = 0;

	while (i < size * size)
	{
		sum += a[i];
		i += (size + 1);
	}

	while (j < size * size - 1)
	{
		sum1 += a[j];
		j += (size - 1);
	}
	printf("%d, %d\n", sum, sum1);
}
