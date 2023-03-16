#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * array_range - function creates an array of integers.
 * @min: array element at index zero.
 * @max: array element at last index.
 *
 * Return: a pointer to the newly created array,
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i = min, size, j = 0;

	if (min > max)
		return (NULL);
	size = (max - min) + 1;
	ptr = malloc(sizeof(int) * size);
	if (!ptr)
		return (NULL);
	while (i <= max)
	{
		ptr[j] = i;
		i++;
		j++;
	}
	return (ptr);
}
