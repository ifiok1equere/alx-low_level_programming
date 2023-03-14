#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * alloc_grid - function returns a pointer to a 2 dimensional array of integers.
 * @width: the number of columns of the 2d-array.
 * @height: the number of rows of the 2d-array.
 *
 * Return: a pointer to the resulting 2d-array of integers.
 */
int **alloc_grid(int width, int height)
{
	int **ptr, i = 0, j = 0;

	if (width == 0 || height == 0)
	{
		return (NULL);
	}
	ptr = (int **)malloc(sizeof(int *) * width);
	if (ptr == NULL)
		return (NULL);
	while (i < width)
	{
		ptr[i] = (int *)malloc(sizeof(int) * height);
		if (ptr[i] == NULL)
			return (NULL);
		while (j < height)
		{
			*ptr[i] = 0;
			j++;
		}
		i++;
	}
	if (ptr)
	{
		return (ptr);
	}
	else
	{
		return (NULL);
	}
}
